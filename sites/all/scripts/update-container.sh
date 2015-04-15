#!/bin/sh

drush dis -y comment
drush en -y features
drush en -y node_bug_7_36 permission_create

# Remove the content-type feature, but leaving the content-type intact (7.35)
drush dis -y node_bug_7_36
