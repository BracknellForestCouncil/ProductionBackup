#!/bin/bash
set -ex
BUILDPATH="$( cd "$(dirname "$0")/.." ; pwd -P )"
cd "${BUILDPATH}/docroot/sites/all/themes/custom/bracknell_theme_base/
npm install
./node_modules/.bin/bower install
npm run build:css
drush cc all
