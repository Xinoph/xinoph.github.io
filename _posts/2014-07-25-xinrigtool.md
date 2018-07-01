---
layout: post-noDate
title: Xin Rig Tool
tagline: An automatic rig generating tool for Maya.
description: An automatic rig generating tool for Maya.
categories: [projects, code]
tags: [Maya, Code, PyMEL]
permalink: projects/code/xinrigtool/

extra_css: /assets/css/projects.css

screenshots: [[xrt01, Easy to configure options],
			  [xrt02, Automatically generate curves based on existing joints],
              [xrt03, Sets up the connections between curves and joints],
              [xrt04, Different head follow options],
              [xrt05, FK / IK switch with interpolation],
              [xrt06, Hand controls based on number of fingers]
              ]
---
{% include JB/setup %}


<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/116376565" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/XinRigTool/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

<h3>Overview</h3>

An automatic rig generating tool for humanoid characters for Maya. 

Contains functions to help with the manual rigging of non-humanoid characters. 

Written in PyMEL for Maya 2012 and later.  

&nbsp;
