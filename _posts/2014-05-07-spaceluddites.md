---
layout: post-noDate
title: Space Luddites
tagline: Cooperative sidescrolling beat-em-up using Unity3D.
description: Cooperative sidescrolling beat-em-up using Unity3D.
categories: [projects, games]
tags: [Games, Unity3D, Art, 3D, Maya, Photoshop, C#, Code]
permalink: projects/games/spaceluddites/

date: 2014-05-07

extra_css: /assets/css/projects.css

screenshots: [[character-select, Choose your character],
                         [begin, Spaceball Player arrives on the ship],
                [spaceballerBat, Spaceball Player attacking some pOds],
              [spaceballerSlide, Spaceball Player sliding into battle],
                      [robotAxe, Space Robot uses its axe],
              [robotGroundPound, Space Robot crushes the pOds with a ground pound],
                [spaceballerULT, Spaceball player uses his ULTIMATE move],
                      [robotULT, Space Robot uses his ULTIMATE move],
              [spaceballerSMASH, Spaceball player smashes an engine],
                         [store, Please enjoy the Papaya shop],
                       [babyHit, Spaceball player attacks the Space Baby],
                    [babyFrenzy, Space Baby fights back]
              ]
---
{% include JB/setup %}

<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/92751871" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/SpaceLuddites/" %}
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

Space Luddites is a multiplayer, 3D, sidescrolling beat-em-up set in outer space where a group of techno-haters works to fight and destroy corporations that use and make technology. The luddites work together to bring an end to these big technology firms and fight their way through various levels to free the galaxy from the grasp of technology.

This game was the result of three months of work in <a href="http://gamedev2-s14.wp.rpi.edu/">Game Development 2</a>. We used Unity3D with C#.

Play the game in your browser <a href="/assets/projects/space-luddites/web-build.html">here</a>! (Unity Web Player Plugin required)

Check out our <a href="http://spaceluddites.weebly.com/">website</a> for more images and information!

<h3>Team Members</h3>

* [{{ site.contributors.annie.name }}]({{ site.contributors.annie.url }}): Artist, Initial Concept
* Brennan Cushin: Programmer
* [Brian Tam]({{ HOME_PATH }}): Artist, Visual Effects
* [{{ site.contributors.neale.name }}]({{ site.contributors.neale.url }}): Writer, Producer
* [{{ site.contributors.scott.name }}]({{ site.contributors.scott.url }}): Lead Programmer

<h3>My Contributions</h3>

Modeling, rigging, animation, visual effects, shaders, props, and HUD elements

* Used Maya and Photoshop to...
    * Create models for the Robot, Baby, and pOd. 
    * Rigged the Spaceball player, Robot, Baby, pOd, pOly, and speaker. 
    * Animated the Baby and pOd and refined some animations for the Robot. 
    * Create environmental assets such as walls, floors, windows, and doors. 
    * Design and draw HUD elements and icons 
<br><br>

* Used C#, Shuriken, and Photoshop to design and implement a dozen visual effects and environment changes including 
    * Ultimate attacks of Spaceball player and Robot 
    * Spaceball and slide dust 
    * Swing effects for weapons 
    * Ground pound shockwave and decal 
    * Psychic bombs and telekinesis 
    * Laser doors 
    * Explosions

&nbsp;
