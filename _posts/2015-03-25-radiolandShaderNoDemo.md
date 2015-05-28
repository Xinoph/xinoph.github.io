---
layout: post-noDate
title: Radioland Shader
tagline: Shader comparison.
description: Shader comparison.
categories: [projects, code]
tags: [Code, Unity3D, C#, Shaders, Open Source]
permalink: projects/games/radioland/shaderNoDemo

extra_css: /assets/css/projects.css
extra_script: /assets/RadiolandShaderDemo/TemplateData/UnityProgress.js

screenshots: [
[shader-red, Gunthers being lit by a red light],
[shader-redBack, Gunthers being lit from behind by a red light],
[shader-blue, Gunthers being lit by a blue light],
              ]

---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/Radioland/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshow">
    <a href="/assets/images/Radioland/shaderDemo.gif"><img src="/assets/images/Radioland/shaderDemo.gif" width="200px" alt="Animation of the shader in action" class="img-responsive"></a>
{% for img in page.screenshots %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" width="200px" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>


<h3>Overview</h3>

This demo compares four different shaders, the middle two of which I wrote using Unity's ShaderLab language.<br>

<b>Note:</b> There is no demo on this page because either your browser does not support WebGL Unity or you got here accidentally.<br>
To try to view the demo, click <a href="/projects/games/radioland/shaderNoDemo/">here</a>.

<h3>Description</h3>

On the far left is the unlit vertex colors for the model. This is what the artists generate in Maya.

The "Vert PBR" shader combines vertex coloring with physically based rendering. This adds shading and metal/smoothness to achieve effects such as the reflection off the headphones or the highlight on the hair.

The "Vert PBR with Colored Shading" gives the artists more control over how light interacts with the model to create a more unique style. Here, the artists can tint the model based on how much light versus how much shadow it is receiving.
For example, if there is a red light shining on the model, then the parts hit by the light would be tinted red and the parts that are in shadow could be tinted blue.

As comparison, on the far right is Unity's default "Standard" shader. 

<br>
Check out <a href="http://radioland.github.io/">Radioland's website</a>!

<br>
[>> Return to Radioland page](/projects/games/radioland) 

&nbsp;
