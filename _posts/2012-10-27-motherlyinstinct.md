---
layout: post-noDate
title: Motherly Instinct
tagline: Single player arcade game created in Python/Pygame.
description: Single player arcade game created in Python/Pygame.
categories: [projects, games]
tags: [Games, C++, OpenFrameworks, Code, Art, Photoshop]
permalink: projects/games/motherlyinstinct/

extra_css: /assets/css/projects.css

screenshots: [[mi-gameplay, Create a network of webs to keep the ants away from your eggs],
              [mi-instructions, Controls for how to play]
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/84239069" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/MotherlyInstinct/" %}
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

Motherly Instinct is a single player arcade game created in Python/Pygame. It was made during a 24 hour RPI Game Dev Club Game Jam under the themes of "Surprise and Suspense." It won "Best in Show" from a panel of judges.

A spider must protect her eggs from hungry ants by creating a network of webs to trap the ants... so that she may inject them with venom and eat their bodies. How long can a mother project her children?

As part of the surprise and suspense themes, the timer displayed may not always be accurate.

<h3>Team Members</h3>

* [{{ site.contributors.scott.name }}]({{ site.contributors.scott.url }}): Lead programmer
* [Brian Tam]({{ HOME_PATH }}): User Interface and mechanics programmer
* <a href="mailto:sardar@rpi.edu">Ronald Sardarian</a>: Programmer
* [Bombadeer studios](http://www.bombadeerstudios.com/): Music
* [http://www.freesfx.co.uk](http://www.freesfx.co.uk): Sound Effects

<h3>My Contributions</h3>

Created the visuals of the game and programmed the HUD elements.

* Used Photoshop to...
    * Draw the spider, egg, web node, and ant sprites .
    * Animated the spider and ant sprites.
    * Draw the web and venom bars.
    * Create the background images.
<br><br>

* Used Python to code the HUD elements such as the web and venom bars and the player's score.


&nbsp;
