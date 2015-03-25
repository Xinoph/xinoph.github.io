---
layout: post-noDate
title: Radioland Shader Demo
tagline: Shader comparison demo.
description: Shader comparison demo.
categories: [projects, code]
tags: [Code, Unity3D, C#, Shaders, Open Source]
permalink: projects/games/radioland/shaderDemo

extra_css: /assets/css/projects.css
extra_script: /assets/RadiolandShaderDemo/TemplateData/UnityProgress.js

screenshots: [
[shader-red, Gunthers being lit by a red light],
[shader-redBack, Gunthers being lit from behind by a red light],
[shader-blue, Gunthers being lit by a blue light],
              ]

---
{% include JB/setup %}

<link rel="stylesheet" href="/assets/RadiolandShaderDemo/TemplateData/style.css">


<div class="template-wrap clear">
    <canvas class="emscripten" id="canvas" oncontextmenu="event.preventDefault()" height="587px" width="940px"></canvas>
      <div class="gllogo"></div>
      <div class="fullscreen"><img src="/assets/RadiolandShaderDemo/TemplateData/fullscreen.png" width="38" height="38" alt="Fullscreen" title="Fullscreen" onclick="SetFullscreen(1);" /></div>
      <div class="gltitle">Radioland Shader Demo</div>
    </div>
  <p class="footer">&laquo; created with <a href="http://unity3d.com/" title="Go to unity3d.com">Unity</a> &raquo;</p>
<script type='text/javascript'>
  // connect to canvas
  var Module = {
    filePackagePrefixURL: "/assets/RadiolandShaderDemo/Release/",
    memoryInitializerPrefixURL: "/assets/RadiolandShaderDemo/Release/",
    preRun: [],
    postRun: [],
    print: (function() {
      return function(text) {
        console.log (text);
      };
    })(),
    printErr: function(text) {
      console.error (text);
    },
    canvas: document.getElementById('canvas'),
    progress: null,
    setStatus: function(text) {
      if (this.progress == null) 
      {
        if (typeof UnityProgress != 'function')
          return;
        this.progress = new UnityProgress (canvas);
      }
      if (!Module.setStatus.last) Module.setStatus.last = { time: Date.now(), text: '' };
      if (text === Module.setStatus.text) return;
      this.progress.SetMessage (text);
      var m = text.match(/([^(]+)\((\d+(\.\d+)?)\/(\d+)\)/);
      if (m)
        this.progress.SetProgress (parseInt(m[2])/parseInt(m[4]));
      if (text === "") 
        this.progress.Clear()
    },
    totalDependencies: 0,
    monitorRunDependencies: function(left) {
      this.totalDependencies = Math.max(this.totalDependencies, left);
      Module.setStatus(left ? 'Preparing... (' + (this.totalDependencies-left) + '/' + this.totalDependencies + ')' : 'All downloads complete.');
    }
  };
  Module.setStatus('Downloading (0.0/1)');
</script>
<script src="/assets/RadiolandShaderDemo/Release/UnityConfig.js"></script>
<script src="/assets/RadiolandShaderDemo/Release/fileloader.js"></script>
<script>if (!(!Math.fround)) {
  var script = document.createElement('script');
  script.src = "/assets/RadiolandShaderDemo/Release/BrianTests-build.js";
  document.body.appendChild(script);
} else {
  var codeXHR = new XMLHttpRequest();
  codeXHR.open('GET', '/assets/RadiolandShaderDemo/Release/BrianTests-build.js', true);
  codeXHR.onload = function() {
    var code = codeXHR.responseText;
    if (!Math.fround) { 
try {
  console.log('optimizing out Math.fround calls');
  var m = /var ([^=]+)=global\.Math\.fround;/.exec(code);
  var minified = m[1];
  if (!minified) throw 'fail';
  var startAsm = code.indexOf('// EMSCRIPTEN_START_FUNCS');
  var endAsm = code.indexOf('// EMSCRIPTEN_END_FUNCS');
  var asm = code.substring(startAsm, endAsm);
  do {
    var moar = false; // we need to re-do, as x(x( will not be fixed
    asm = asm.replace(new RegExp('[^a-zA-Z0-9\\$\\_]' + minified + '\\(', 'g'), function(s) { moar = true; return s[0] + '(' });
  } while (moar);
  code = code.substring(0, startAsm) + asm + code.substring(endAsm);
  code = code.replace("'use asm'", "'almost asm'");
} catch(e) { console.log('failed to optimize out Math.fround calls ' + e) }
 }

    var blob = new Blob([code], { type: 'text/javascript' });
    codeXHR = null;
    var src = URL.createObjectURL(blob);
    var script = document.createElement('script');
    script.src = URL.createObjectURL(blob);
    script.onload = function() {
      URL.revokeObjectURL(script.src);
    };
    document.body.appendChild(script);
  };
  codeXHR.send(null);
}
</script>


<div style="margin-bottom: 700px;"> </div>

{% assign images_prefix = "/assets/images/Radioland/" %}
{% assign thumbnails = true %}

<div class="project-images" id="slideshow">
{% for img in page.screenshots %}
    <a href="{{images_prefix}}{{img[0]}}.png"><img src= "{{images_prefix}}{{img[0]}}{% if thumbnails %}-tn{% endif %}.png" alt="{{img[1]}}" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>


<h3>Overview</h3>

This demo compares four different shaders, the middle two of which I wrote using Unity's ShaderLab language.<br>
The WebGL demo differs slightly from in-game due to some web optimization. Refer to the screenshots for a more accurate representation.

<h3>Description</h3>

On the far left is the unlit vertex colors for the model. This is what the artists generate in Maya.

The "Vert PBR" shader combines vertex coloring with physically based rendering. This adds shading and metal/smoothness to achieve effects such as the reflection off the headphones or the highlight on the hair.

The "Vert PBR with Colored Shading" gives the artists more control over how light interacts with the model to create a more unique style. Here, the artists can tint the model based on how much light versus how much shadow it is receiving.
For example, if there is a red light shining on the model, then the parts hit by the light would be tinted red and the parts that are in shadow could be tinted blue.

As comparison, on the far right is Unity's standard shader with vertex colors added in. 

<br>
Check out <a href="http://radioland.github.io/">Radioland's website</a>!

<br>
[>> Return to Radioland page](/projects/games/radioland) 

&nbsp;
