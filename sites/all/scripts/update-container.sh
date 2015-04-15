#!/bin/sh

drush dis -y comment
drush en -y features
drush en -y node_bug_7_36 permission_create_bug_7_36

# Expand the "Add Content" menu item
drush scr - <<'EOS'
  $link = menu_link_get_preferred("node/add", "navigation");
  $link["expanded"] = 1;
  menu_link_save($link);
EOS
