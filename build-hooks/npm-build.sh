#!/bin/bash
set -ex
pwd
cd docroot/sites/all/themes/custom/bracknell_theme_base/
npm install
./node_modules/.bin/bower install
npm run build:css
drush cc all
