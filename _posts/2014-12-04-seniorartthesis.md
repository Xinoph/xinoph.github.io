---
layout: post-noDate
title: Zhu FeiTian
tagline: 3D high-detail character model and sculpts.
description: 3D high-detail character model and sculpts.
categories: [projects, 3d]
tags: [Art, 3D, Maya, Photoshop, zBrush, Substance Designer, Substance Painter, Marmoset Toolbag]
permalink: projects/3d/zhufeitian/

real_date: 2014-12-04

extra_css: /assets/css/projects.css

screenshots: [
[3-24-body, Finalized model & refined textures of body, .png, false],
[3-24-face, Closeup of the face, .png, true],
[1-31-body, New concept body, .png, false],
[1-31-face, New concept face, .png, true],
[1-31-turn, New concept turnaround, .gif, false],
[pbr-test2, Old concept - Full 3D model, .png, false],
[11-30-face, Old concept - Detail shots of face, .png, true],
[skirtmail-11-30, Old concept - Detail shot of skirt, .png, true],
[turn-11-30, Old concept - Turnaround, .gif, false]
              ]
---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/CS/" %}
{% assign thumbnails = true %}

<h3>Overview</h3>

A work in progress piece towards achieving 3D photorealism.

This piece will be shown along with other RPI senior art theses in a gallery in April 2015. This page will be updated again after the [gallery show](/blog/2015/04/06/iridesence/).

Modeled in Maya and zBrush. Textured using Substance Designer, Substance Painter, and Photoshop. Rendered using Marmoset Toolbag.

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
