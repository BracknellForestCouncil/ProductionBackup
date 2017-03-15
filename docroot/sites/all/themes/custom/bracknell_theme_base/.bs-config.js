/*
 |--------------------------------------------------------------------------
 | Browser-sync config file
 |--------------------------------------------------------------------------
 |
 | For up-to-date information about the options:
 |   http://www.browsersync.io/docs/options/
 |
 | There are more options than you see here, these are just the ones that are
 | set internally. See the website for more info.
 |
 |
 */

var mydevurl = "http://localhost";

if (sourceFile = require('./.bs-config.local.js'))
    mydevurl = sourceFile.myDevUrl;

module.exports = {
    "proxy": {
        "target": mydevurl
    },
    "files": "css/*.css, js/*.js, !node_modules/**/*.html"
};
