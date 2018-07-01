def generateJoints(self):
    self.numSpine = self.setup_JtsSpine.getValue()
    self.numFingers = self.setup_JtsSFingers.getValue()
    madeFingers = 0
    
    doNotLock = []
    for j in self.JOINTLOCATIONS.keys():
        if not self.setup_thumb.getValue() and 'thumb' in j:
            continue
        if 'finger' in j and 'thumb' not in j and madeFingers >= self.numFingers * 4:
            continue
        self.makeJoint(j)
        if 'newParent' in self.JOINTLOCATIONS[j] or 'finger' in j:
            doNotLock.append(j)
        if 'finger' in j and 'thumb' not in j:
            madeFingers += 1
    # Lock y/z translation to help user setup (except for parent joints)
    joints = [i for i in pm.ls(type=pm.nt.Joint) if i not in doNotLock]
    for j in joints:
        j.setAttr('ty', lock=True)
        j.setAttr('tz', lock=True)
        
    freeParents = [x for x in self.JOINTLOCATIONS.keys() if 'newParent' in self.JOINTLOCATIONS[x]]
    pm.group(*freeParents, n='Joints')
    pm.xform(piv=(0,0,0), ws=True)
    
    pm.group(n='XinRig')
    pm.xform(piv=(0,0,0), ws=True)

    pm.select(d=True)
    
    self.generatedJoints = True

def makeJoint(self, n, loc=None, rel=False):
    # n = joint to make
    # example: ('FK_L_shoulder', {'name':'CTRL_FK_L_Shoulder', 'curve':'circle', 'loc':'L_shoulder', 'rot':True, 'color':14} )
    if 'newParent' in self.JOINTLOCATIONS[n]:
        pm.select(d=True)
    if 'parent' in self.JOINTLOCATIONS[n]:
        pm.select(self.JOINTLOCATIONS[n]['parent'])
    if ('orient' in n):
        if pm.objExists(self.JOINTLOCATIONS[n]['joint']):
            pm.joint(self.JOINTLOCATIONS[n]['joint'], e=True, oj=self.JOINTLOCATIONS[n]['oj'],
                sao=self.JOINTLOCATIONS[n]['sao'], ch=True)
        return
    if 'override' in self.JOINTLOCATIONS[n]:
        overrideFunc = (self.OVERRIDES[n])
        exec(overrideFunc)
    else:
        if (loc==None):
            loc=self.JOINTLOCATIONS[n]['loc']
        pm.currentUnit( linear='m' )
        pm.joint(name=n, p=loc, sc=False, r=rel)
    # Color joint
    if 'color' in self.JOINTLOCATIONS[n]:
        UTIL.colorOverride(pm.ls(sl=True), self.JOINTLOCATIONS[n]['color'])