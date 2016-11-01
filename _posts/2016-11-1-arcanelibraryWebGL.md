---
layout: post-noDate
title: Arcane Library WebGL Demo
tagline: 
description: 
categories: [projects, 3d]
tags: [3D, Maya, Art, Photoshop, Substance Designer, Substance Painter, Unity3D]
permalink: projects/3d/arcanelibraryWebGL/
group: noShow

extra_css: /assets/css/projects.css
extra_script: /assets/ArcaneLibrary/TemplateData/UnityProgress.js

---
{% include JB/setup %}

<link rel="stylesheet" href="/assets/ArcaneLibrary/TemplateData/style.css">

<div>
    <canvas class="emscripten" id="canvas" oncontextmenu="event.preventDefault()" height="522px" width="928px"></canvas>
    <br>
    <div class="logo"></div>
    <div class="fullscreen"><img src="/assets/ArcaneLibrary/TemplateData/fullscreen.png" width="38" height="38" alt="Fullscreen" title="Fullscreen" onclick="SetFullscreen(1);" /></div>
</div>
<p class="footer">&laquo; created with <a href="http://unity3d.com/" title="Go to unity3d.com">Unity</a> &raquo;</p>
<script type='text/javascript'>
  var Module = {
    TOTAL_MEMORY: 268435456,
    errorhandler: null,         // arguments: err, url, line. This function must return 'true' if the error is handled, otherwise 'false'
    compatibilitycheck: null,
    dataUrl: "/assets/ArcaneLibrary/Release/Build.data",
    codeUrl: "/assets/ArcaneLibrary/Release/Build.js",
    memUrl: "/assets/ArcaneLibrary/Release/Build.mem",
    
  };
</script>
<script src="/assets/ArcaneLibrary/Release/UnityLoader.js"></script>

<div class="clear"></div>

<h3>Notable Differences</h3>

Due to limitations of WebGL and browser resources, there are a few differences between this demo and the standalone version.

* No light shafts from the window
* No realtime lighting from the fireplace
    * This results in no shadows from the fire, causing some light bleeding in the area
* Lower quality of light maps
    * Areas of high shadow / ambient occlusion are not as dark as they should be

<br>
[» Return to main Arcane Library page](/projects/3d/arcanelibrary/)

&nbsp;
