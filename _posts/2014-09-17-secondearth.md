---
layout: post-noDate
title: Second Earth
tagline: Graphical text-based adventure using Unity3D.
description: Graphical text-based adventure using Unity3D.
categories: [projects, games]
tags: [Games, Unity3D, Art, 2D, Photoshop, C#]
permalink: projects/games/secondearth/

extra_css: /assets/css/projects.css

screenshots: [[se01, A dead body in the sewers!],
              [se02, Wonder if Marissa knows about it...],
              [se03, A wise man in the land of the dead],
     [graveyard-ani, Spoooooooooooky graveyard],
            [office, A lovely office],
            [garage, Abandoned garage]
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/116315433" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/SecondEarth/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    {% if forloop.index == 4 %}
      <a href="{{images_prefix}}{{img[0]}}.gif"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
    {% else %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
    {% endif %}
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

Second Earth is a text-based adventure about what would happen if our current Earth is dying but there is hope of a new, hospitable planet out there. The visuals help drive the feeling of a worn down planet. 

Second Earth was the result of a two week game jam in <a href="http://www.arts.rpi.edu/~ruiz/EGDFall2014/Experimental.htm">Experimental Game Design</a>. It is built using Unity3D for Windows and Mac computers. 

<h3>Team Members</h3>

* [{{ site.contributors.annie.name }}]({{ site.contributors.annie.url }}): Artist, Initial Concept
* Brennan Cushin: Programmer
* [Brian Tam]({{ HOME_PATH }}): Artist, Visual Effects
* [{{ site.contributors.neale.name }}]({{ site.contributors.neale.url }}): Writer, Producer
* [{{ site.contributors.scott.name }}]({{ site.contributors.scott.url }}): Programmer
* [{{ site.contributors.matt.name }}]({{ site.contributors.matt.url }}): Composer

<h3>My Contributions</h3>

Concepting, establishing style, and background and UI design

* Concepted the layout of the UI.
* Established the art style and taught other artist how to achieve it.
* Used Photoshop to draw and animate the backgrounds.
* Created various UI assets.  
