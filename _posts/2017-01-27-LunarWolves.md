---
layout: post-noDate
title: Lunar Wolves
tagline: An illustration of a Vindictus character. Estimated time - 20 hours.
description: An illustration of a Vindictus character. Estimated time - 20 hours.
extra_css: /assets/css/projects.css
categories: [projects, games]
tags: [Games, Unity3D, Art, C#, Photoshop]
permalink: projects/games/lunarwolves

screenshots: [
        ["01-story"],
        ["02-adjustMoon"],
        ["03-phaseCycle"],
        ["04-phasesInteractive"]
        ]
---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/LunarWolves/" %}
{% assign thumbnails = true %}

<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/201305608" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

Lunar Wolves is an educational game targeted towards middle schoolers about lunar phases.

Learning objectives include the length of a lunar cycle and using models to predict phases of the moon.

It was created using Photoshop, C#, and Unity for WebGL targeting towards desktops and tablets.

This game was contracted by <a href="http://www.legendsoflearning.com/">Legends of Learning.<br>
<img src="http://www.legendsoflearning.com/wp-content/themes/legends-of-learning/assets/img/logo-black.png" width="150px"></a>

<br>
<h3>Credits</h3>

* [Fungus for Unity](http://fungusgames.com/)
* [Solar System Scope](http://www.solarsystemscope.com/) - Moon & Earth Textures
* [DennisH2010](https://3dhaupt.com/) - Wolf model
* [yd](http://opengameart.org/content/another-space-background-track) - Song, "Observing The Star"
* [Felicia Valenti](http://www.feliciavalenti.com/) - Wolf howls
* [Lokif](http://opengameart.org/content/gui-sound-effects), [kenney.nl](kenny.nl) - SFX

