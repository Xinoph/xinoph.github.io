---
layout: post-noDate
title: Radioland
tagline: Fantasy 3D puzzle platformer using Unity3D.
description: Fantasy 3D puzzle platformer using Unity3D.
categories: [projects, games]
tags: [Games, Unity3D, Art, 3D, Code, C#, Maya, Photoshop, Substance Designer, Open Source]
permalink: projects/games/radioland/

extra_css: /assets/css/projects.css

screenshots: [
[01-Dance, Gunther dancing in Radioland],
[02-Exploring, "Gunther exploring Radioland's changing world"],
[03-findingARadioTower, Gunther finds a radio tower to bring back radio],
[05-ScaryJumps, Gunther attempts some scary jumps],
[06-birdsAndTower, Gunther dances with baby birds in front of a tall tower],
[07-flowerHat, "Gunther finds a flower hat. Doesn't he look great?"],
[08-audioVisualizers, The world responds to music],
[levelSelect, Level select menu featuring radio tuning mechanic],
[cosmetics, Cosmetics menu showing off different unlockable outfits!],
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <iframe width="100%" src="https://www.youtube.com/embed/HbTQizZzDiM?rel=0" frameborder="0" allowfullscreen></iframe>
</div>


{% assign images_prefix = "/assets/images/Radioland/Radioland-" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

Join Gunther in Radioland, where you guide our lovable hero in helping the critters of Radioland get life back from the silence that has surrounded them. In this 3D puzzle platformer, use the power of radio to traverse colorful environments, solve puzzles, and collect crazy outfits. Turn on the radio towers, move the environment, complete the levels and guide Radioland back to a brighter future!

This game was the result of three months of work in <a href="http://www.arts.rpi.edu/~ruiz/EGDFall2014/Experimental.htm">Experimental Game Design</a> with continued development in the spring of 2015. We used Unity3D with C#, Maya, and Photoshop. We stream live internet radio using a third-party DLL called BASS from Un4seen Developments. Notable programming feats include audio spectrum visualization, spline editor tools supporting mesh generation, a triggered event/effects system, editor scripting, and physics using kinematic rigidbodies. Our art style is achieved through ShaderLab shaders which we wrote for tri-planar texture mapping and vertex colored PBR.

Check out <a href="http://radioland.github.io/">Radioland's website</a>!


<div class="github-widget" data-repo="Radioland/RadiolandGame"></div>

<h3>Team Members</h3>

* [{{ site.contributors.neale.name }}]({{ site.contributors.neale.url }}): Writer
* [{{ site.contributors.annie.name }}]({{ site.contributors.annie.url }}): Artist
* [Brian Tam]({{ HOME_PATH }}): Artist
* [{{ site.contributors.tim.name }}]({{ site.contributors.tim.url }}): Programmer
* [{{ site.contributors.scott.name }}]({{ site.contributors.scott.url }}): Programmer
* [{{ site.contributors.matt.name }}]({{ site.contributors.matt.url }}): Composer

<h3>My Contributions</h3>

Modeling, rigging, animation, visual effects, shaders, props, and UI elements

* Used Maya, Photoshop, and Substance Designer to...
    * Create models for the critters (resistor, capacitor, solenoid, DIP, birb), the radio tower, the waterfall island, the cassette, phone, and message in a bottle. 
    * Rigged Gunther and the critters. 
    * Animated the critters to have idle, dance, and interaction animations. 
    * Create environmental props such as wires and crystals as well as tiling environmental textures for each season. 
    * Create the UI elements. 
<br><br>

* Used Unity's ShaderLab language write shaders that...
    *  Combine vertex colors, physically based rendering, and custom shading colors to create a unique effect. [Shader Demo](/projects/games/radioland/shaderDemo)
    *  Use a toon shader that gives artists plenty of control over how light affects different materials. 
    *  Use an object space tri-planar algorithm to apply textures to the islands. 
    *  Simulates a chrome-like metal based on viewing angle 
<br><br>

* Designed and implemented UI elements and menus
    * Radio tuner during game play
    * Level select menu that features radio tunic mechanic
    * Cosmetic menu to showcase different outfits
<br><br>

* Used C# and Shuriken to design and implement visual effects including 
    *  Trails when Gunther uses a power 
    *  The beacons for the radio tower 
    *  Linking lighting systems to materials 
    *  Music notes for dancing 
    *  Snowfall in winter 
<br><br>

* Designed the tutorial level and performed voice acting for the speech bubble  

&nbsp;
