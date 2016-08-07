---
layout: page
title: Home
tagline: Brian Tam's Portfolio
permalink: /

extra_css: /assets/css/projects.css

featured: [Delia, Huntress Lara, Radioland, Zhu FeiTian, Space Doggity, 
          Space Luddites]

---
{% include JB/setup %}

## Featured Works

<div class="projects-grid">
    {% for feat in page.featured %}
      {% for post in site.posts %}
      {% if feat == post.title %}
          <a href="{{ post.url }}" class="btn btn-default project-container" title="{{ post.title }}: {{ post.tagline }}">
              <div class="tile-title">{{ post.title }}</div>
              <img src="/assets/images/tilesBig/{{ post.title }}-450px.png" class="title-summary img-responsive" alt="{{ post.title }}">
          </a>
      {% endif %}
      {% endfor %}
    {% endfor %}

</div>

{% comment %}
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

{% endcomment %}

<hr style="width: 50%;">

## About

<span style="clear:both"></span>

{% comment %}
<img src="/assets/images/brian.png" class="btn btn-default project-container" style="float: left; margin-right: 30px; padding: 12px;">

<br><br>
{% endcomment %}

<br>
<h4>I am a graduate from Rensselaer Polytechnic Institute who studied game design and electronic art.</h4>


I enjoy making games with wonky mechanics with zany characters to match. I believe that both players and spectators of a game should get enjoyment from seeing the game world unfold before them.
<br><br>
You can contact me at [brian.w.tam@gmail.com](mailto:brian.w.tam@gmail.com) or check out my [resume](/assets/BrianTam-Resume.pdf).

<br><br>

