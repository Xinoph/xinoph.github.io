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
[4-8-UnityTest, Model posed & rendered in Unity3D, .png, false],
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


concept: [
[hairstyles, ],
[poses, ],
[concept-01, ],
[concept-02, ],
[concept-03, ],
[concept-04, ],
[colors, ],
[concept-v2, ],
[concept-v3, ],
[concept-v4, ],
[concept-v4v2t, ],
[concept-v5, ],
[concept-2, ]
]

---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/CS/" %}
{% assign thumbnails = true %}

<h3>Overview</h3>

A work in progress piece towards achieving a realistic-style character model.

This piece will be shown along with other RPI senior art theses in a gallery in April 2015. This page will be updated again after the [gallery show](/blog/2015/04/06/iridesence/).

Modeled in Maya and zBrush. <br>
Textured using Substance Designer, Substance Painter, and Photoshop. <br>
Rendered using Marmoset Toolbag and Unity3D. <br>

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


<h3 id="concepts">Concept Progression</h3>

{% assign images_prefix = "/assets/images/CS/concept/" %}
{% assign thumbnails = false %}

<div id="slideshow2" style="text-align: center;">
{% for img in page.concept %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}-tn.png" alt="{{img[1]}}" class="img-responsive" style="margin-bottom: 10px"></a>
{% endfor %}
</div>

<script>
    $('#slideshow2').photobox('a', {history:false, time:0, counter:false});
</script>

&nbsp;
