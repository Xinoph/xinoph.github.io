#--- Create a new mesh by keeping selected vertices and discarding the rest
...
#--- For each kept vertex, check to see if it is connected to other kept vertices
#--- If not, then create new connections to maintain triangles
for i in self.vertIndices:
    thisVert = model.getShape().vtx[i]
    if not thisVert == self.originVertex:
        # Get this vertex's connecting vertices (cv)
        cvIndices = []
        faces = thisVert.connectedFaces()
        for f in faces:
            cv = str(f.getVertices())
            print(cv)
            # Split cv from nameNewShape.vtx[indices] to just indices
            cv = str(cv.split("[")[1]).split("]")[0]
            cv = cv.split(",")
            for s in cv:
                # If it is a slice of vertices
                if ":" in s:
                    s = self.expandSlice(s, True)
                    if i in s:
                        s.remove(i)
                    cvIndices.extend(s)
                # Else, it's an individual vertex
                else:
                    s = int(s)
                    if s != i:
                        cvIndices.append(s)

        cvIndices = set(cvIndices)
        # Check number of [connecting vertices] intersecting with [kept vertices]
        inBoth = cvIndices.intersection(setOfVertIndices)
        numInBoth = len(inBoth)
...