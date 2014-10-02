from django.conf.urls import patterns

from . import views

urlpatterns = patterns('',
    (r'.*', views.index),
)
