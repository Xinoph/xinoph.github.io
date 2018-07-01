fn FurFromPreset preset &RUG_FurOptions = (
    if (getCurrentSelection()).count != 0 then (
        with undo on (
            if (classof selection[1] == VRayFur) then (
                -- Modify existing fur if selected
                fur = selection[1]
                RUGStruct.model = selectRugInGroup()
                rug = RUGStruct.model
            ) else (
                -- Or create a new fur
                RUGStruct.model = selectRugInGroup()
                if (superclassof RUGStruct.model != geometryclass) then (
                    messageBox "Please select a rug object inside an opened group."
                ) else (
                    rug = RUGStruct.model
                    
                    fur = VRayFur sourceNode:rug transform:rug.transform
                    fur.scale = [0.01, 0.01, 0.01]
                    if (isGroupMember rug) then (
                        rootGroup = getRootGroupHead rug
                        attachNodesToGroup fur rootGroup
                    )
                    fur.name = rug.name + "_fur"
                )
            )
            if (fur != undefined) then (
                -- Set fur preset properties
                props = getPropNames preset
                for p in props do
                (
                    if (hasproperty fur p) then
                    (
                        pVal = getProperty preset p
                        if (pVal != undefined) then
                            setProperty fur p pVal
                    )
                )
                -- Set placement & material properties
                setProperty fur "placement" RUG_FurOptions.placementType
                setProperty fur "materialID" RUG_FurOptions.mtlid
                
                fur.wirecolor = rug.wirecolor
                
                if (RUG_FurOptions.useHairMtl == true) then (
                    VRayHairMtlPreset fur rug
                ) else (
                    fur.material = rug.material
                    if (classof fur.material == Multimaterial) then (
                        messageBox "Multi/Sub Material found on rug. Please double check fur's material"
                    )
                )
                RUGStruct.fur = fur
                select fur
            )
        )
    ) else (messageBox "Please only select one object or select a valid object")
)