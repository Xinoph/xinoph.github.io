---
layout: post-noDate
title: Space Doggity
tagline: Animation about a space corgi's descent onto Earth.
description: Animation about a space corgi's descent onto Earth.
categories: [projects, 3d]
tags: [3D, Art, Maya, Photoshop, AfterEffects]
permalink: projects/3d/spacedoggity/

extra_css: /assets/css/projects.css

screenshots: [[MajorTom, Concept for the space corgi, Major Tom],
              [Storyboard2, Second version of storyboards, closer to finalzed animation],
              [Storyboard, Initial storyboards]
              ]

---
{% include JB/setup %}


<div class="video-wrapper">
    <video width="100%" controls>
        <source src="/assets/images/SpaceDoggity/SpaceDoggity.mp4" type="video/mp4">
        <source src="/assets/images/SpaceDoggity/SpaceDoggity.webm" type="video/webm">
    </video>
</div>

<img src="/assets/images/SpaceDoggity/AnimationBreakdown.png">

{% assign images_prefix = "/assets/images/SpaceDoggity/" %}
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

A 3D animation about a space corgi’s descent onto Earth. 

Animated in Maya and composited with AfterEffects over three months. 

<h3>Team Members</h3>

* [Brian Tam]({{ HOME_PATH }})
    * Drew initial storyboards 
    * Concepted, modeled, and rigged the Corgi 
    * Modeled the Earth, spaceship, bird, house, and backyard 
    * Animated various scenes: 
        * Opening (0:00-0:26) 
        * Put Your Helmet On (0:34-0:41) 
        * Initiate Landing Sequence (0:41-0:56) 
        * Explosion (1:03-1:07) 
        * Running Corgi (1:27-1:47) 
<br><br>
* [{{ site.contributors.annie.name }}]({{ site.contributors.annie.url }})
    * Finalized Corgi concept 
    * Drew initial storyboards 
    * Created animatic with sound placement 
    * Animated various scenes: 
        * Playing with the Bone (0:26-0:34) 
        * Entry into Earth (0:56-1:03) 
        * The Corgi Emerges (1:07-1:27) 
        * Added Corgi to special thanks (1:52-2:07) 
<br><br>

* [Keenan Crane's City Model](http://opengameart.org/content/abstract-city)
* Space Oddity - David Bowie
* The Red Army is the Strongest - Red Army Choir 
* Mameshiba Song - Dentsu Inc. 
* SFX from SoundBible

&nbsp;
