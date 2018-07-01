---
layout: post-noDate
title: Graphics Programming
tagline: Using OpenGL
description: Graphics programming using OpenGL
categories: [projects, code]
tags: [Code, C++, OpenGL]
permalink: projects/code/graphicsProgramming/

extra_css: /assets/css/projects.css

images: [
[photonMapping-reflectiveSphere, "Photon mapping on diffuse and reflective surfaces to illustrate color bleeding"],
[raytrace-shadowsAndAA, "Raytracing with reflections, soft shadows, and antialiasing"],
[incompressibleFluid, Incompressible fluid simulation using methods described by Foster and Metaxas, true],
[subdivisionBunny, Loop Subdivision Rules applied to the Stanford Bunny, true],
[bunnyByeBye, Edge collapse operations performed on the Stanford Bunny, true],
[silk, Cloth simulation of silk using methods described by Provot],
[tablecloth-forces, Cloth simulation of a table cloth with force visualization]
              ]
---
{% include JB/setup %}


{% assign images_prefix = "/assets/images/ACG/" %}
{% assign thumbnails = false %}

<div class="project-images" id="slideshow">
    {% for img in page.images %}
    <div class="divInGrid" style="max-width: 345px">
    	{% if img[2] %}
    	    <a href="{{images_prefix}}{{img[0]}}.gif">
            <img src="{{images_prefix}}{{img[0]}}.gif" class="img-responsive" alt="{{img[1]}}"
    	{% else %}
        <a href="{{images_prefix}}{{img[0]}}.png">
            <img src="{{images_prefix}}{{img[0]}}.png" class="img-responsive" alt="{{img[1]}}" 
        {% endif %}
        
        {% if img[3] != null %}
        	 data-pb-captionLink="{{img[3]}}"
        {% endif %}
        >
        </a>
    <h5>{{img[1]}}</h5></div>
    {% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

Examples from my Advanced Computer Graphics course during Spring 2015 at Rensselaer Polytechnic Institute.

These pictures show both required assignments and optional extensions and further research.

As homeworks are reused from year to year, I cannot post the code for my implementations.

The code is written in C++ using OpenGL 3.2.  

&nbsp;
