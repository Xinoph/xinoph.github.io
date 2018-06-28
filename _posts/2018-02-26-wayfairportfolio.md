---
layout: post-special
title: Wayfair Tech Artist Portfolio
tagline: 
description: 
categories: []
tags: []
permalink: wayfairportfolio/

extra_css: /assets/css/projects.css

lanes: [
    HLDS7210-r1b,
    BL21259-r2,
    ANDV1770-r1,
    LGLY5715-r1c,
    WRLO5719-r1b,
    WLAO3857-r0,
    ALCT6901-r1,
    LDER1425-r1,
    BL3480-r1,
    CHRL3562-r1
]


---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/Wayfair/" %}


<h3 id="fastlanes">Fast Lanes</h3>

These are a few product photography images that I have created at Wayfair.

My responsibilities as a 3D Viz Artist include

* Ensuring good placement & composition while maintaining the Stylist's vision for the product
* Modifying models & materials for product accuracy and photorealism
* Lighting, rendering, and compositing the scene according to Wayfair's standards

Images are rendered in 3ds Max with VRay and composited in Photoshop.

<div class="project-images" id="slideshow">
{% for img in page.lanes %}
    <a href="{{images_prefix}}{{img}}.jpg"><img src= "{{images_prefix}}{{img}}.jpg" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

&nbsp;

<h3 id="rugassistant">Rug Assistant</h3>

```MAXScript
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
                
                -- Set placement
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
```

```MAXScript
fn SaveFurPreset fur &RUG_FurOptions = (
    if (selection.count != 1 or (classof selection[1] != VRayFur)) then (
        messageBox "Please select a fur object."
    ) else (
        fur = $
        preset = ""
        
        props = getPropNames RUG_FurOptions.furPreset
        presetName = RUG_FurOptions.RUG_UI_PresetName.text
        listOfPresets = #()

        -- Save preset name
        if (doesFileExist furPresetsINI == true and hasINISetting furPresetsINI ("FurPresets")) then (
            -- Get existing string of presets & convert to array
            stringPresets = (GetINISetting furPresetsINI "FurPresets" "Presets") as string
            listOfPresets = filterString stringPresets "¦"
        )
        -- Append new preset to array
        appendIfUnique listOfPresets presetName
        -- Convert array to string using ¦ as seperator
        listOfPresetsAsString = ""
        for s in listOfPresets do (
            listOfPresetsAsString = listOfPresetsAsString + s + "¦"
        )
        SetINISetting furPresetsINI "FurPresets" "Presets" (listOfPresetsAsString as string)
        
        -- Save preset settings
        preset = "[FurPresets-" + presetName + "]\n"
        for p in props do (
            if (hasproperty fur p) then (
                pVal = getProperty fur p
                if (pVal != undefined) then (
                    SetINISetting furPresetsINI ("FurPresets-"+presetName) (p as string) (pVal as string)
                    preset = preset + (p as string) + "=" + (pVal as string) + "\n"
                )
            )
        )
        RUG_FurOptions.RUG_UI_PresetParameters.text = preset
    )
    RefreshFurPresetsList &RUG_FurOptions
)
```

&nbsp;
