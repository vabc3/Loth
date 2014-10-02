{% load bootstrap3 %}
{% bootstrap_css %}

{# Display a form #}

<form action="/url/to/submit/" method="post" class="form">
    {% csrf_token %}
    {% buttons %}
        <button type="submit" class="btn btn-primary">
            {% bootstrap_icon "star" %} Submit
        </button>
    {% endbuttons %}
</form>
