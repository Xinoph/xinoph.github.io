---
layout: page
title: Home
tagline: Brian Tam's Blog & Portfolio
permalink: /

extra_css: /assets/css/projects.css

featured: [Radioland, Space Doggity, Wiccan, 
          Sarah, Space Luddites]

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

    <a href="/projects/2d" class="btn btn-default project-container" title="Behind a Mask: Charcoal, Acrylic, and Newspaper on Canvas">
              <div class="project-title">Behind a Mask</div>
              <img src="/assets/images/tiles/BehindAMask.png" class="title-summary img-responsive" alt="Behind a Mask">
          </a>

</div>

<hr style="width: 50%;">

## Latest Blog Post

{% assign posts = site.categories.blog %}

{% assign post = posts[0] %}

  <h3 style="margin-bottom: 0px;" id="{{ post.title | replace:' ','-'}}"><a href="{{ post.url }}">{{ post.title }}</a></h3>

  <h5 style="margin-top: 0px; margin-left: 30px;"> Posted {{ post.date | date_to_long_string }}</h5>

  {{ post.excerpt }}

  <a href="{{ post.url }}" style="margin-left: 30px;">&raquo; Read more</a>
  <br><br>

  {% unless post.categories == empty %}
  <ul class="tag_box inline">
    <li><i class="icon-folder-open"></i></li>
    {% assign categories_list = post.categories %}
    {% include JB/categories_list %}
  </ul>
  {% endunless %}  

  {% unless post.tags == empty %}
  <ul class="tag_box inline">
    <li><i class="icon-tags"></i></li>
    {% assign tags_list = post.tags %}
    {% include JB/tags_list %}
  </ul>
  {% endunless %}  


<hr style="width: 50%;">

## About

<span style="clear:both"></span>

<img src="/assets/images/brian.png" class="btn btn-default project-container" style="float: left; margin-right: 30px; padding: 12px;">

<br><br>
<h4>I am an undergraduate student at Rensselaer Polytechnic Institute studying game design and electronic art.</h4>


As a Senior, I enjoy making games with my classmates and creating characters either through 2D or 3D means.  I blend both art and code into my work and am always looking into new ways to fuse the two together.
<br><br>
You can contact me at [brian.w.tam@gmail.com](mailto:brian.w.tam@gmail.com) or check out my [resume](/assets/BrianTam-Resume.pdf).

<br><br>

