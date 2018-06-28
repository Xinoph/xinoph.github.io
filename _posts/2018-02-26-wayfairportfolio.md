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
    ANDV1770-r1,
    LGLY5715-r1c,
    WRLO5719-r1b,
    WLAO3857-r0,
    ALCT6901-r1,
    LDER1425-r1,
    BL3480-r1,
    CHRL3562-r1
]


---
{% include JB/setup %}

{% assign images_prefix = "/assets/images/Wayfair/" %}


<h3 id="fastlanes">Fast Lanes</h3>

These are a few product photography images that I have created at Wayfair.

My responsibilities as a 3D Viz Artist include

* Ensuring good placement & composition while maintaining the Stylist's vision for the product
* Modifying models & materials for product accuracy and photorealism
* Lighting, rendering, and compositing the scene according to Wayfair's standards

Images are rendered in 3ds Max with VRay and composited in Photoshop.

<div class="project-images" id="slideshow">
{% for img in page.lanes %}
    <a href="{{images_prefix}}{{img}}.jpg"><img src= "{{images_prefix}}{{img}}.jpg" class="img-responsive"></a>
{% endfor %}
</div>

<script>
    $('#slideshow').photobox('a', {history:false, time:0, counter:false});
</script>

&nbsp;

```MAXScript
function test() {
  console.log("notice the blank line before this function?");
}
```

&nbsp;
