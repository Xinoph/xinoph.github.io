---
layout: post-noDate
title: Radioland
tagline: Fantasy 3D puzzle platformer using Unity3D.
description: Fantasy 3D puzzle platformer using Unity3D.
categories: [projects, games]
tags: [Games, Unity3D, Art, 3D, Code, C#, Maya, Photoshop, Substance Designer, Open Source]
permalink: projects/games/radioland/

extra_css: /assets/css/projects.css

screenshots: [[hello, Gunther meets the speech bubble],
         [lowGravity, Gunther uses a low gravity jump to reach far away islands],
           [highJump, Gunther uses a high jump to get a better view],
              [metal, Gunther uses metal skin to resist strong winds],
             [bottle, Gunther found a message in a bottle],
              [phone, Gunther found a phone with an unread text],
             [leaves, Gunther plays around in the leaves],
         [radioTower, Gunther reached the radio tower],
              [dance, Gunther dances with the critters]
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <video width="100%" controls>
        <source src="/assets/images/Radioland/RadiolandTrailer.mp4" type="video/mp4">
    </video>
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

Radioland is a single player 3D third-person puzzle platformer set on a chain of floating islands. The player controls Gunther as he explores four season-themed levels. As the player navigates through jumping challenges, they search for and collect audio logs. These audio logs reveal snippets of four narratives each focusing on communication.

This game was the result of three months of work in <a href="http://www.arts.rpi.edu/~ruiz/EGDFall2014/Experimental.htm">Experimental Game Design</a> and we plan to continue development in the spring of 2015. We used Unity3D with C#.


<div class="github-widget" data-repo="timmyterrezza/EGDFinalProject"></div>

<h3>Team Members</h3>

* [{{ site.contributors.neale.name }}]({{ site.contributors.neale.url }}): Writer
* [{{ site.contributors.annie.name }}]({{ site.contributors.annie.url }}): Artist
* [Brian Tam]({{ HOME_PATH }}): Artist
* [{{ site.contributors.tim.name }}]({{ site.contributors.tim.url }}): Programmer
* [{{ site.contributors.scott.name }}]({{ site.contributors.scott.url }}): Programmer
* [{{ site.contributors.matt.name }}]({{ site.contributors.matt.url }}): Composer

<h3>My Contributions</h3>

Modeling, rigging, animation, visual effects, shaders, props, and HUD elements

* Used Maya, Photoshop, and Substance Designer to...
    * Create models for the critters (resistor, capacitor, solenoid, DIP, birb), the radio tower, the waterfall island, the cassette, phone, and message in a bottle. 
    * Rigged Gunther and the critters. 
    * Animated the critters to have idle, dance, and interaction animations. 
    * Create environmental props such as wires and crystals as well as tiling environmental textures for each season. 
    * Create the HUD elements. 
<br><br>

* Used Unity's ShaderLab language write shaders that...
    *  Use a toon shader that gives artists plenty of control over how light affects different materials. 
    *  Use an object space tri-planar algorithm to apply textures to the islands. 
    *  Simulates a chrome-like metal based on viewing angle 
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
