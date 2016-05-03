---
layout: post-noDate
title: Huntress Lara
tagline: Fan art for Rise of the Tomb Raider.
description: Fan art for Rise of the Tomb Raider.
categories: [projects, 3d]
tags: [Maya, Art, 3D, Photoshop]
permalink: projects/3d/huntresslara/

extra_css: /assets/css/projects.css

screenshots: [[laraCliff, ],
			  [laraBow, ],
              [laraBind, ],
              [laraWire, ]
              ]
---
{% include JB/setup %}


<iframe width="640" height="480" src="https://sketchfab.com/playlists/embed?collection=834ba7e1e68d4379aaaae6010a99a512" frameborder="0" allowfullscreen mozallowfullscreen="true" webkitallowfullscreen="true" onmousewheel=""></iframe>


{% assign images_prefix = "/assets/images/HuntressLara/" %}
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

Fan art of Lara Croft in the Huntress outfit from Rise of the Tomb Raider

Created using Maya and Photoshop.

&nbsp;
