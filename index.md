---
layout: page
title: Home
tagline: Brian Tam's Blog & Portfolio
permalink: /

extra_css: /assets/css/projects.css

featured: [Radioland, Space Doggity, Senior Art Thesis, 
          Sarah, Space Luddites, Siristi]

---
{% include JB/setup %}

## Featured Works

<div class="projects-grid">
    {% for feat in page.featured %}
      {% for post in site.posts %}
      {% if feat == post.title %}
          <a href="{{ post.url }}" class="btn btn-default project-container" title="{{ post.title }}: {{ post.tagline }}">
              <div class="project-title">{{ post.title }}</div>
              <img src="/assets/images/tiles/{{ post.title }}.png" class="title-summary img-responsive" alt="{{ post.title }}">
          </a>
      {% endif %}
      {% endfor %}
    {% endfor %}
</div>

## About

<span style="clear:both"></span>

<img src="/assets/images/brian.png" class="btn btn-default project-container" style="float: left; margin-right: 30px; padding: 12px;">

<br><br>
<h4>I am an undergraduate student at Rensselaer Polytechnic Institute studying game design and electronic art.</h4>


As a Senior, I enjoy making games with my classmates and creating characters either through 2D or 3D means.  I blend both art and code into my work and am always looking into new ways to fuse the two together.
<br><br>
You can contact me at [brian.w.tam@gmail.com](mailto:brian.w.tam@gmail.com) or check out my [resume](/resume/).

<br><br>

