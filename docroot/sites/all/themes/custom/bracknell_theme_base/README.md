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

To ensure browser sync works correctly, copy .bs-config.local.example.js to .bs-config.local.js and change the settings as required.

The following tasks are available:

- 'npm run dev': runs and watches SCSS and JS files.

### Icons.

The icon fonts for the Bracknell Forest Council website are created using [Icomoon](https://icomoon.io/app/#/select). In the 'images/icons/src' directory are the SVG and AI files used to create the font. The AI and SVG files were inherit by Microserve and as such we do not know who original created them. The AI files cannot be opened when using Adobe Illustrator for Mac as they appear to be corrupt, however they have been left in the repository in case they are required in future.

To create the icon fonts (for example if you need to add/remove icons) please upload all the SVG files in the 'images/icons/src/base' and 'images/icons/src/services' directories to Icomoon. In Icomoon, you can regenerate the font, which should then be placed in the 'fonts/icons' directory and update any values in the 'scss/10-base/icons/icons-base' and 'scss/10-base/icons/icons-services' directories.

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
