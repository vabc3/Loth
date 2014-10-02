<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width" />
    <title>iewBag.Title</title>
    {% load bootstrap3 %}
    {% bootstrap_css %}
</head>
<body>
    <div class="navbar navbar-default navbar-fixed-top">
        <div class="container">
            <div class="navbar-header">
            <a href="#" class="navbar-brand">Index</a>
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
                
            </div>
            <div class="navbar-collapse collapse">

                <ul class="nav navbar-nav">
                    <li><a href="#">HOME</a></li>
                    <li><a href="#">API</a></li>
                </ul>
            </div>
        </div>
    </div>
    <div class="container body-content">
        body
        <hr />
        <footer>
            <p>Apps</p>
        </footer>
    </div>

   <script type="text/javascript" src="{{STATIC_URL }}/js/jquery.js"> </script>
    {% bootstrap_javascript %}
</body>
</html>