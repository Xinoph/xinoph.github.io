---
layout: post-noDate
title: Senior Art Thesis
tagline: 3D high-detail character model and sculpts.
description: 3D high-detail character model and sculpts.
categories: [projects, 3d]
tags: [Art, 3D, Maya, Photoshop, zBrush, Substance Designer, Substance Painter, Marmoset Toolbag]
permalink: projects/3d/cs/

real_date: 2014-12-04

extra_css: /assets/css/projects.css

screenshots: [[pbr-test2, Full 3D model, .png, false],
                [11-30-face, Detail shots of face and leg, .png, true],
                [skirtmail-11-30, Wireframe and polycount of model, .png, true],
                [turn-11-30, Texture for the head, .gif, false]
              ]
---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/CS/" %}
{% assign thumbnails = true %}

<h3>Overview</h3>

A work in progress piece towards achieving 3D photorealism. This page will be updated as more progress is made. 

This piece will be shown along with other RPI senior art theses in a gallery in April 2015. 

Modeled in Maya and zBrush. Textured in Substance Painter and Photoshop. Rendered using Marmoset Toolbag.

<div id="slideshow" style="text-align: center;">
{% for img in page.screenshots %}
    {% if img[3] == true %}
    <a href="{{images_prefix}}{{img[0]}}{{img[2]}}"><img src= "{{images_prefix}}{{img[0]}}-tn{{img[2]}}" alt="{{img[1]}}" class="img-responsive" style="margin-bottom: 10px"></a>
    {% else %}
    <a href="{{images_prefix}}{{img[0]}}{{img[2]}}"><img src= "{{images_prefix}}{{img[0]}}{{img[2]}}" alt="{{img[1]}}" class="img-responsive" style="margin-bottom: 10px"></a>
    {% endif %}
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>


&nbsp;
