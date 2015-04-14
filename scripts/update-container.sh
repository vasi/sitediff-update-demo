#!/bin/sh

drush dis -y comment
drush en -y features
drush en -y node_bug_7_36 permission_create_bug_7_36

