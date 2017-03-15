# Bracknell Base Theme

## About this theme
This is the main theme for the Bracknell Forest Council website.

### Usage Information

You will need the following installed on your system in order to use the front-end tools in this theme:

- [node.js](https://nodejs.org/en/)
- [composer](https://getcomposer.org/)
- [bower](https://bower.io/)

To set up the theme for first time use please run these commands in the root of the theme:

- npm install
- bower install

You will also need to setup Pattern Lab for first time use. In the 'pattern-lab' directory, please run:

- composer install

To ensure browser sync works correctly, copy .bs-config.local.example.js to .bs-config.local.js and change the settings as required.

The following tasks are available:

- 'npm run dev': runs and watches SCSS and JS files.

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

## License
GNU General Public License, version 2 or later
