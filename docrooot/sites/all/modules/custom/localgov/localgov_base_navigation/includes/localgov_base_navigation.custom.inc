<?php
/**
 * @file
 * localgov_base_navigation.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

function localgov_base_navigation_add_menu_links() {
    menu_rebuild();

    module_invoke_all('localgov_menu_links');

    menu_cache_clear_all();
}
