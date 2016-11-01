---
layout: post-noDate
title: Arcane Library
tagline: Realtime 3D environment using Unity3D.
description: Realtime 3D environment using Unity3D.
categories: [projects, 3d]
tags: [3D, Maya, Art, Photoshop, Substance Designer, Substance Painter, Unity3D]
permalink: projects/3d/arcanelibrary/

extra_css: /assets/css/projects.css

screenshots: [[spellArea, ],
			  [overview, ],
              [nebula, ],
              [tableView, ],
              [entranceView, ]
              ]

breakdownImages: [[spellArea-noLighting, No lighting],
                [spellArea-noLightingWireframe, No lighting with wireframe],
                [overview-noLighting, No lighting],
                [overview-noLightingWireframe, No lighting with wireframe]
                ]

---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/ArcaneLibrary/" %}
{% assign thumbnails = true %}

<div style='position:relative;padding-bottom:57%'><iframe src='https://gfycat.com/ifr/PertinentDeficientBellsnake' frameborder='0' scrolling='no' width='100%' height='100%' style='position:absolute;top:0;left:0;' allowfullscreen></iframe></div>

<div style='position:relative;padding-bottom:57%'><iframe src='https://gfycat.com/ifr/DizzyCavernousBeardeddragon' frameborder='0' scrolling='no' width='100%' height='100%' style='position:absolute;top:0;left:0;' allowfullscreen></iframe></div>

<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

Environment art of an arcane library.

Assets created using Maya, Photoshop, Substance Designer, & Substance Painter.
<br>Rendered in realtime using Unity3D.

[» Windows Demo (74 MB)](/assets/ArcaneLibrary/ArcaneLibrary.zip)

[» WebGL Demo (lower quality)](/projects/3d/arcanelibraryWebGL/)

<h5>My Work</h5>
* Modeled & placed objects in Maya & Unity3D
* Textured using Photoshop, Substance Designer, & Substance Painter
* Wrote shaders to achieve visual effects
    * Nebula system: World position as UVs on a particle system
    * Gems: Edited base gem shader to give it a rainbow tint based on view angle

<h5>Work In Progress</h5>

* Last updated: Nov. 1
* To Do
    * Add more details to tell the narrative of the environment
        * Spell ingredients
        * Drawings scattered throughout library
        * Paintings of library owners
        * More scattered objects
    * Finalize lighting
    * Interactivity

<h3>Breakdown</h3>

<div class="project-images" id="slideshow2">
{% for img in page.breakdownImages %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow2').photobox('a', {history:false, time:0, counter:false});
</script>

* Triangles: Around 1.1M.
* Textures: Albedo, Normal, Metallic/Smoothness maps for each material
    * 96 total texture files, including debugging textures

<h3>Resources Used</h3>

* [LightShafts](https://github.com/robertcupisz/LightShafts) by robertcupisz
* [GrabPass Distortion Shader](http://console-dev.de/?p=714) by Peter Schraut
* [Gem Shader](https://www.assetstore.unity3d.com/en/#!/content/3) by Unity Technologies
* Substance Share
    * [Stone Tiles 001](https://share.allegorithmic.com/libraries/705) by Allegorithmic
    * [Tavern_Teak](https://share.allegorithmic.com/libraries/1164) by pawnswizard
    * [Arcane Arabesque Patterns](https://share.allegorithmic.com/libraries/977) by jeffersonmpinheiro
    * [Marble Smooth Grayscale](https://share.allegorithmic.com/libraries/1040) by cixelyn
    * [OldBrickGenerator](https://share.allegorithmic.com/libraries/817) by emielsleegers
    * [Flag Generator](https://share.allegorithmic.com/libraries/792) by tamu75
    * [Eyeball Generator](https://share.allegorithmic.com/libraries/881) by cop.hrvoje
    * [Cookie Material](https://share.allegorithmic.com/libraries/916) by jimbobelinio
* [Crab Nebula](http://www.nasa.gov/multimedia/imagegallery/image_feature_460.html) by NASA
* [Night Sky Skybox](http://www.hazelwhorley.com/skyboxtex3_bitmaps.html) by Hazel Whorley
* [High-poly Candle Stub](http://www.blendswap.com/blends/view/1701) by CheedleBoy

&nbsp;
