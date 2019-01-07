---
layout: post-special
title: Wayfair Tech Artist Portfolio
tagline: 
description: 
categories: []
tags: []
permalink: wayfairportfolio/

extra_css: /assets/css/projects.css

lanes: [
    ROHE8992,
    ADML8149,
    WRLO3449,
    RDBS8956,
    ASTG8559,
    HLDS7210
]

wfrug: [
    [rugassistantui.jpg, "An annotated image of the Rug Assistant's UI shows its ease of use", 14px],
    [rug-closeup.jpg, "A close-up shot of the generated binding & fur as seen in the scene", 0px],
    [BLMT6946.jpg, "The final lane shot of this rug generated using the assistant", 44px]
]

wfpropset: [
    [PropSetExample-Outdoor.png, ],
    [PropSetExample-Bookshelf.png, ]
]

wfscripts: [
    [quickrender.jpg, "A quick 2 minute render shows enough detail to give art direction for styling changes, which saves considerable time compared to waiting for the artist's final render", 32px],
    [meshlight.gif, "Comparison of creating a mesh light manually to using the script.<br>60 seconds versus 10 seconds!", 0px]
]

wfscriptsa: [
    [tracemirror.gif, "Demo of the trace mirror script. It draws a box in the viewport to approximate a mirror's reflection to help stylists & artists place objects", 0px],
    [windowlight.gif, "Demo of the window light macro. It creates a light with appropriate color, directionality, & options", 59px],
    [whitecard.gif, "Demo of the white card macro. It creates a card at the selection with appropriate render settings", 59px]
]


---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/Wayfair/2k/" %}

<h3 id="renders">Renders</h3>
<div class="project-images" id="slideshow">
<a href="/assets/images/Wayfair/BrianTam_ElephantRoom.jpg"><img src="/assets/images/Wayfair/BrianTam_ElephantRoom.jpg" class="img-responsive" style="max-height: 880px; max-width: 723px"></a><h5 style="margin-top: 0px;">Submission for "Life in the Fast Lane" Challenge</h5>

{% for img in page.lanes %}
    <a href="{{images_prefix}}{{img}}.jpg"><img src= "{{images_prefix}}{{img}}.jpg" class="img-responsive"></a>
{% endfor %}

</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

&nbsp;

{% assign images_prefix = "/assets/images/Wayfair/scripts/" %}
<hr>
<h3 id="propsets">Prop Sets</h3>

Prop Sets is a tool for stylists to create scenes for Swap-In 3.0.

In conjunction with the WAM, the tool gives stylists an easy interface to pick swap props for their scenes.

There are up to 5 distinct sets with 5 individual swap props in each, leading to the possibility of 3,125 unique images!

<div class="project-images" id="slideshowwfpropset">
    <a href="{{images_prefix}}propsets.jpg"><img src="{{images_prefix}}propsets.jpg" class="img-responsive" style="max-height: 880px; max-width: 723px"></a><h5 style="margin-top: 0px;">The tool shows all the chosen swap props in a grid. It is easy for stylists to visualize the possible swap sets and make changes if necessary. This example would have 75 possible swap-in scenes!</h5>
{% for img in page.wfpropset %}
    <div class="divInGrid" style="max-width: 360px;"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowwfpropset').photobox('a', {history:false, time:0, counter:false});
</script>

<hr>
<h3 id="rugassistant">Rug Assistant</h3>

The Rug Assistant is a script that helps generate realistic rugs.

It has 3 main components

* Binding generation with different shape options
* Noise variation with standardized settings based on rug type
* Fur generation from presets


This tool is constantly updated as the team achieves new techniques towards photorealism.

Updates include

* A more accurate and customizable binding shape and material
* Wrinkle variations based on how the real SKU is constructed
* Fur variations and movement to imply a lived-in product

<div class="project-images" id="slideshowwfrug">
    <a href="{{images_prefix}}rugassistant-demo.gif"><img src="{{images_prefix}}rugassistant-demo.gif" class="img-responsive" style="max-height: 880px; max-width: 723px"></a>
{% for img in page.wfrug %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive" style="padding-top: {{img[2]}};"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowwfrug').photobox('a', {history:false, time:0, counter:false});
</script>

<hr>
<h3 id="liquidtool">Fill With Liquid Tool</h3>

Fill With Liquid Tool helps stylist and artists generate the proper geometry for liquid inside of glasses.

* It easily creates the liquid geometry based on the container's shape and automatically adjusts it for VRay to render the liquid touching the container properly.
* The height of the liquid is always adjustable and level to the ground

<div class="project-images" id="slideshowwfliquid">
    <a href="{{images_prefix}}fillwithliquid.gif"><img src="{{images_prefix}}fillwithliquid.gif" class="img-responsive"></a><h5 style="margin-top: 0px;">A demo of the tool shows its speed and ease of use</h5>
    <a href="{{images_prefix}}fillwithliquid-variety.png"><img src="{{images_prefix}}fillwithliquid-variety.png" class="img-responsive"></a><h5 style="margin-top: 0px;">This works for any container: cups, mugs, bowls, glasses, and even rotated bottles!</h5>
</div>

<script>
    $('#slideshowwfliquid').photobox('a', {history:false, time:0, counter:false});
</script>

<hr>
<h3 id="miscwayfair">Other Toolkit Scripts</h3>

Other scripts that I have written for artists include

* Stylist Quick Render to help stylists and art directors to view a scene with basic lighting in order to facilitate art direction.
* Easy Mesh Light script to speed up the creation of VRay Mesh Lights
* Trace Mirror tool to help stylists & artists approximate a mirror's reflection without rendering
* Toolbar button to create a window light with appropriate light settings and render properties
* Toolbar button to create a white card with appropriate render properties
* Improvements and fixes to existing toolkit scripts such as "Prep for Deadline," "Organize Artist Scene", "VRay Fur Lister," "Autogenerate Light Select Elements," & "VRay Proxy Converter"

<div class="project-images" id="slideshowwfscripts">
{% for img in page.wfscripts %}
    <div class="divInGrid" style="max-width: 360px;"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive" style="padding-top: {{img[2]}};"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
<br>
{% for img in page.wfscriptsa %}
    <div class="divInGrid" style="max-width: 256px;"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive" style="padding-top: {{img[2]}};"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>


<script>
    $('#slideshowwfscripts').photobox('a', {history:false, time:0, counter:false});
</script>
