# Bracknell Base Theme (bracknell_theme_base) theme

This Drupal theme was generated using the
[Yeoman Drupal Generator](https://github.com/CraigGardener/generator-drupal)
(version 0.0.0).

## About this theme
This is the main theme for the Bracknell Forest Council website.

### Usage Information

You will need the following installed on your system in order to use the front-end tools in this theme:

- [node.js](https://nodejs.org/en/)
- [grunt](https://gruntjs.com/)
- [composer](https://getcomposer.org/)
- [bower](https://bower.io/)

To set up the theme for first time use please run these commands in the root of the theme:

- npm install
- bower install

You will also need to setup Pattern Lab for first time use. In the 'pattern-lab' directory, please run:

- composer install

The following tasks are available:

- 'grunt compile': runs babel, stylesCompile, plBuild
- 'grunt validate': does not work - runs jsonlint, jshint, scsslint
- 'grunt rebuild' - runs icon-build, compile, concurrent:dev
- 'grunt': runs compile, concurrent:dev

## Files and Directories
- `css/` - CSS files (generated from SCSS)
- `fonts/` - Font files
  - `icons/` - Icon fonts (generated from icon SVG files)
- `images/` - Image files
  - `icons/` - Icons
    - `src/` - Icon SVG files
    - `templates/` - Templates for SCSS and Pattern Lab
    - `icon-font-template.ai` - Adobe Illustrator icon template
- `js/` - JS files
- `pattern-lab/` - Pattern Lab
  - `source/`
    - `_data/` - Data for Pattern Lab
    - `_patterns/` - Patterns for Pattern Lab
- `scss/` - SCSS files
- `template.php`
- `theme-settings.php`
- `bracknell_theme_base.info`


### Configuration
- Gruntconfig.json - This is the default configuration.
- Gruntconfig.custom.json - This should be used to override default values where
necessary for this theme and should be committed to the git repository.
- Gruntconfig.local.json - This will override all default and custom values and
will be ignored by git.

## License
GNU General Public License, version 2 or later
