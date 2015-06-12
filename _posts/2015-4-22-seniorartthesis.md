---
layout: post-noDate
title: Zhu FeiTian
tagline: 3D high-detail character model and sculpts.
description: 3D high-detail character model and sculpts.
categories: [projects, 3d]
tags: [Art, 3D, Maya, Photoshop, ZBrush, Substance Designer, Substance Painter, Marmoset Toolbag]
permalink: projects/3d/zhufeitian/

real_date: 2014-12-04

extra_css: /assets/css/projects.css

screenshots: [
[FeiTian-stand, Zhu FeiTian ready to strike at a moment's notice, .png, true],
[FeiTian-standDetail, Detail shot, .png, true],
[FeiTian-jump, FeiTian channels sacred fire through her sword to vanquish her foes, .png, true],
[FeiTian-jumpDetail, Detail shot, .png, true],
[FeiTian-standNormal, The normals of the model, .png, true],
[FeiTian-standTopology, The topology of the model, .png, true],
[textureMaps-skinSilk, The texture maps used to render the skin and silk, .png, true],
[textureMaps-clothes, The texture maps used to render the clothes, .png, true],
[graph-silk, The Substance Designer graph to generate silk, .png, true],
[graph-mountainArmor, The Substance Designer graph to generate mountain armor, .png, true],
]

progress: [
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

A character study towards achieving a realistic-style character model and rendering it in a game engine.

Zhu FeiTian (朱飛天) is a warrior who hails from the most western regions of Tang Dynasty China (around 700 AD). Born with red hair and pale skin, people saw her as possessed by an evil spirit and took her to a temple to have it exorcised. When the monks approached the baby with candles lit by sacred fires, the dancing flames transfixed FeiTian. She reached towards them and grabbed one of the fires. Instead of burning the flesh, the fire traveled up FeiTian's arms, leaving marks but otherwise not harming the baby. The monks witnessed this in awe and concluded that it was not an evil spirit that was within her, but quite the opposite. The monks raised FeiTian to be a spiritual warrior, combining the graceful art of the sword with the beautiful power of sacred fire to fend off evil.

Modeled in Maya and ZBrush. <br>
Textured using Substance Designer, Substance Painter, and Photoshop. <br>
Rendered in real-time using Unity3D with Marmoset Skyshop. <br>

This piece was shown along with other RPI senior art theses in a [gallery from April 22nd-25th 2015](/blog/2015/04/06/iridesence/).

<h3>Marmoset Viewer</h3>
<iframe src="/assets/viewer/feitian-stand.html" name="viewerframe" allowfullscreen="true" width="100%" height="650px" style="border: 0px" class="img-responsive"></iframe>

<div style="text-align: center;">
<a href="/assets/viewer/feitian-stand.html" target="viewerframe"><img src="{{images_prefix}}stand.png" class="img-responsive"></a>
<a href="/assets/viewer/feitian-attack.html" target="viewerframe"><img src="{{images_prefix}}attack.png" class="img-responsive"></a>
</div>

<br>
<b>Note:</b> Since particle effects were rendered inside Unity using the Shuriken particle system, they are missing inside of Marmoset Viewer.

<h3>Screenshots</h3>

<div id="slideshow3" style="text-align: center;">
{% for img in page.screenshots %}
    {% if img[3] == true %}
    <a href="{{images_prefix}}{{img[0]}}{{img[2]}}"><img src= "{{images_prefix}}{{img[0]}}-tn{{img[2]}}" alt="{{img[1]}}" class="img-responsive" style="margin-bottom: 10px"></a>
    {% else %}
    <a href="{{images_prefix}}{{img[0]}}{{img[2]}}"><img src= "{{images_prefix}}{{img[0]}}{{img[2]}}" alt="{{img[1]}}" class="img-responsive" style="margin-bottom: 10px"></a>
    {% endif %}
{% endfor %}
</div>

<script>
    $('#slideshow3').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Model Progression</h3>

Model progression from November 2014 to April 2015. Later work is shown first.<br>
Rendered using Marmoset Toolbag. <br>

<div id="slideshow" style="text-align: center;">
{% for img in page.progress %}
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

Concept progression from October 2014 to January 2015. Earlier work is shown first.<br>

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
