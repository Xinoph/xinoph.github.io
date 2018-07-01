macroScript MakeWindowLight category:"BTam Tools" tooltip:"Make a VRay Plane light for a window"  Icon:#("BTamIcons",1) (
    fn GetPosSelection s center:false = (
        local pos = [0,0,0]
        if (s != undefined) then (
            if (classOf s == ObjectSet) then s = s[1] -- get group head
            pos = s.pos
            if (center) then pos = s.center
        )
        pos
    )
    
    (
        pos = GetPosSelection $ center:true
        
        light = VRayLight isSelected:on pos:pos
        light.name = "WindowLight001"
        rotate light (angleaxis 90 [1,0,0])
        light.lightDistribution = 0.2
        light.invisible = on
            
        light.color_mode = 1
        light.color_temperature = 6300
        light.color = color 255 249.817 242.831
        
        light.size0 = 20
        light.size1 = 20
    )
)