---
layout: post-noDate
title: Xin Particle Mesher
tagline: A mesh for particle effects tool for Maya.
description: A mesh for particle effects tool for Maya.
categories: [projects, code]
tags: [Maya, Code, PyMEL]
permalink: projects/code/xinparticlemesher/

extra_css: /assets/css/projects.css

screenshots: [[xpm01, PyMEL tool for creating vertex-based particle emitters.],
			  [xpm02, Select emission vertices & press the button to create the emitter mesh.],
              [xpm03, Automatic subdivision of silhouette edges allows for tighter particle placement.],
              [xpm04, Particle emission using generated shape in Unity3D.],
              [xpm05, Particles applied to a model from the Dota 2 Workshop Requirements.]
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/129827346" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/XPM/" %}
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

A tool that generates the mesh used for vertex-based particle effects. 

Vertices on the input mesh that should emit particles are selected, and a new mesh is generated.

A simple button click generates additional vertices along the origin edges that allows for a tighter particle system. 

Written in PyMEL for Maya 2015 and later.  

&nbsp;
