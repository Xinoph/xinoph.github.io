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
    HLDS7210-r1b,
    BL21259-r2,
    FOME6228-r0,
    ANDV1770-r1,
    ANDV3755-r1,
    WRLO5719-r1b,
    LGLY5715-r1c,
    WLAO3857-r0
]

wfrug: [
    [rugassistantui.jpg, "An annotated image of the Rug Assistant's UI shows its ease of use"],
    [rug-closeup.jpg, "A close-up shot of the generated binding & fur as seen in the scene"]
]

wfruglane: [
    [BLMT6946-r0.jpg, "The final lane shot of this rug generated using the assistant"]
]

wfscripts: [
    [windowlight.gif, "Demo of the window light macro. It creates a light with appropriate color, directionality, & options"],
    [whitecard.gif, "Demo of the white card macro. It creates a card at the selection with appropriate render settings"],
    [vfbccpreset.png, "A simple UI is used to save & load VFB Color Correction presets"]
]

xrt: [[xrt01, Easy to configure options],
              [xrt02, Automatically generate curves based on existing joints],
              [xrt03, Sets up the connections between curves and joints],
              [xrt04, Different head follow options],
              [xrt05, FK / IK switch with interpolation],
              [xrt06, Hand controls based on number of fingers]
              ]

xpm: [[xpm01, PyMEL tool for creating vertex-based particle emitters],
              [xpm02, Select emission vertices & press the button to create the emitter mesh],
              [xpm03, Automatic subdivision of silhouette edges allows for tighter particle placement],
              [xpm04, Particle emission using generated shape in Unity3D],
              [xpm05, Particles applied to a model from the Dota 2 Workshop examples]
              ]

splineik: [[spline01, Easy to configure splines],
              [spline03, The mesh can snap directly to the curve],
              [spline02, The mesh can interpolate along the curve's length],
              [spline04, Spline IK system on the Flying Spaghetti Monster's tentacles],
              [spline05, The splines & control points driving the system]
              ]

acglr: [
    [radiosity.gif, Animation of light & color bleeding calculation using a Radiosity algorithm],
    [radiosity-withSphere.png, Render using Radiosity with the addition of a white sphere],
    [raytrace-shadowsAndAA.png, "Raytracing with reflections, soft shadows, and antialiasing"]
]

acgmm: [
    [subdivisionBunny.gif, Loop Subdivision Rules (mesh smoothing) applied to the Stanford Bunny],
    [bunnyByeBye.gif, Edge collapse Operations (decimation) performed on the Stanford Bunny]
]

---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/Wayfair/2k/" %}

<h3 id="fastlanes">Fast Lanes</h3>
<div class="project-images" id="slideshow">
{% for img in page.lanes %}
    <a href="{{images_prefix}}{{img}}.jpg"><img src= "{{images_prefix}}{{img}}.jpg" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

&nbsp;

<hr>
<h3 id="rugassistant">Rug Assistant</h3>

The Rug Assistant is an Artist Toolkit script that helps generate realistic rugs.

It has 3 main components

* Binding generation with different shape options
* Noise variation with standardized settings
* Fur generation from presets


Tom Walker wrote the bulk of the binding generation while I added generation from edge selection and also optimized and fixed parts of the script.

I wrote the parts for the noise variation and fur generation.

Written in MAXScript for 3ds Max.

<div style='position:relative;padding-bottom:54%'><iframe src='https://gfycat.com/ifr/AnchoredFamiliarIsabellineshrike' frameborder='0' scrolling='no' width='100%' height='100%' style='position:absolute;top:0;left:0' allowfullscreen></iframe></div>

{% assign images_prefix = "/assets/images/Wayfair/scripts/" %}

<div class="project-images" id="slideshowwfrug">
{% for img in page.wfrug %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}

{% for img in page.wfruglane %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive" style="padding-top: 53px;"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowwfrug').photobox('a', {history:false, time:0, counter:false});
</script>

<h5>Code Sample:</h5>
<pre data-src="/assets/codesamples/rugassistant.ms" class="language-clike line-numbers"></pre>

<hr>
<h3 id="miscwayfair">Other Artist Toolkit Scripts</h3>

Smaller scripts that I have written for artists to use include

* Toolbar button to create a window light with appropriate light settings and render properties
* Toolbar button to create a white card with appropriate render properties
* Menu to quickly save/load VRay VFB color correction options
* Improvements and fixes to existing toolkit scripts such as "VRay Fur Lister," "Autogenerate Light Select Elements," & "VRay Proxy Converter"

Written in MAXScript for 3ds Max.

<div class="project-images" id="slideshowwfscripts">
{% for img in page.wfscripts %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowwfscripts').photobox('a', {history:false, time:0, counter:false});
</script>

<h5>Code Sample:</h5>
<pre data-src="/assets/codesamples/btammacros.ms" class="language-clike line-numbers"></pre>
<hr>
<h3 id="xinrigtool">Xin Rig Tool</h3>
An automatic rig generating tool for humanoid characters for Maya. 

Contains functions to help with the manual rigging of non-humanoid characters. 

Written in Python for Maya.  

<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/116376565" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/XinRigTool/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshowxrt">
{% for img in page.xrt %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowxrt').photobox('a', {history:false, time:0, counter:false});
</script>

<h5>Code Sample:</h5>
<pre data-src="/assets/codesamples/xinrigtool.py" class="language-python line-numbers"></pre>

<hr>
<h3 id="xinpm">Xin Particle Mesher</h3>
A tool that generates the mesh used for vertex-based particle effects.

Vertices on the input mesh that should emit particles are selected, and a new mesh is generated.

A simple button click generates additional vertices along the origin edges that allows for a tighter particle system.

Written in Python for Maya.

<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/129827346" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>

{% assign images_prefix = "/assets/images/XPM/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshowxpm">
{% for img in page.xpm %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowxpm').photobox('a', {history:false, time:0, counter:false});
</script>


<h5>Code Sample:</h5>
<pre data-src="/assets/codesamples/xinpm.py" class="language-python line-numbers"></pre>

<hr>
<h3 id="splineik">Spline IK for Unity</h3>
An inverse kinematic system that uses splines to determine joint locations. This allows for natural looking movement while also being easy to configure.

Just move a control’s transform, and the mesh follows!

Written in C# for Unity3D.

<div class="video-wrapper">
    <iframe src="//player.vimeo.com/video/116376258" frameborder="0" webkitallowfullscreen="" mozallowfullscreen="" allowfullscreen=""></iframe>
</div>


{% assign images_prefix = "/assets/images/SplineIK/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshowsplineik">
{% for img in page.splineik %}
    <div class="divInGrid" style="max-width: 256px"><a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowsplineik').photobox('a', {history:false, time:0, counter:false});
</script>

<h5>Code Sample:</h5>
<pre data-src="/assets/codesamples/splineik.cs" class="language-csharp line-numbers"></pre>

<hr>
<h3 id="graphicsprogramming">Graphics Programming with OpenGL</h3>
Various examples that show different aspects & techniques of computer graphics.

The code is written in C++ using OpenGL 3.2.

{% assign images_prefix = "/assets/images/ACG/" %}
<h4>Lighting & Rendering</h4>
<div class="project-images" id="slideshowacglr">
{% for img in page.acglr %}
    <div class="divInGrid" style="max-width: 280px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}"  alt="{{img[1]}}" class="img-responsive" style="max-width: 280px"></a><h5>{{img[1]}}</h5>
    </div>
{% endfor %}
</div>

<h5>Code Samples:</h5>
<pre data-src="/assets/codesamples/radiosity.cpp" class="language-cpp line-numbers"></pre>

<pre data-src="/assets/codesamples/raytracer.cpp" class="language-cpp line-numbers"></pre>

<script>
    $('#slideshowacglr').photobox('a', {history:false, time:0, counter:false});
</script>


<h4>Mesh Manipulation</h4>
<div class="project-images" id="slideshowacgmm">
{% for img in page.acgmm %}
    <div class="divInGrid" style="max-width: 360px"><a href="{{images_prefix}}{{img[0]}}"><img src= "{{images_prefix}}{{img[0]}}"  alt="{{img[1]}}" class="img-responsive"></a><h5>{{img[1]}}</h5></div>
{% endfor %}
</div>

<script>
    $('#slideshowacgmm').photobox('a', {history:false, time:0, counter:false});
</script>

<h5>Code Samples:</h5>

<pre data-src="/assets/codesamples/subdivision.cpp" class="language-cpp line-numbers"></pre>>

<pre data-src="/assets/codesamples/edgecollapse.cpp" class="language-cpp line-numbers"></pre>

&nbsp;

{%comment%}
<script>
Prism.plugins.toolbar.registerButton('select-code', function(env) {
    var button = document.createElement('button');
    button.innerHTML = 'Select Code';

    button.addEventListener('click', function () {
        // Source: http://stackoverflow.com/a/11128179/2757940
        if (document.body.createTextRange) { // ms
            var range = document.body.createTextRange();
            range.moveToElementText(env.element);
            range.select();
        } else if (window.getSelection) { // moz, opera, webkit
            var selection = window.getSelection();
            var range = document.createRange();
            range.selectNodeContents(env.element);
            selection.removeAllRanges();
            selection.addRange(range);
        }
    });

    return button;
});
</script>
{%endcomment%}

<script>
Prism.plugins.toolbar.registerButton('expand-code', function(env) {
    var button = document.createElement('button');
    button.innerHTML = 'Expand Code';

    button.addEventListener('click', function () {
        var p = env.element.parentElement;
        maxh = "50em";
        h = p.style.maxHeight;
        if (h == maxh) {
            h = "8em";
            button.innerHTML = 'Expand Code';
        } else {
            h = maxh;
            button.innerHTML = 'Collapse Code';
        }
        p.style.maxHeight = h;
    });

    return button;
});
</script>
