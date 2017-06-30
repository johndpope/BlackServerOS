# -*- coding: utf-8 -*-
# Generated by Django 1.9.6 on 2016-08-15 01:57
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='TaskModel',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('task_date', models.DateTimeField(max_length=30)),
                ('task_name', models.CharField(max_length=120)),
                ('task_analyst', models.CharField(max_length=50)),
                ('task_endpoints', models.TextField()),
                ('task_inactive', models.BooleanField()),
            ],
        ),
    ]
