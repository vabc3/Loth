from django.conf.urls import patterns, include, url
from django.contrib import admin
#import news
urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'my.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^admin/', include(admin.site.urls)),
    url(r'^news/', include('news.urls')),
)
