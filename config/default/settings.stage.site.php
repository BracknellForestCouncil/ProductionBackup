<?php

/**
 * @file
 * Drupal site-specific configuration file (STAGING environment).
 */

/**
 * Base URL (optional).
 *
 * If Drupal is generating incorrect URLs on your site, which could
 * be in HTML headers (links to CSS and JS files) or visible links on pages
 * (such as in menus), uncomment the Base URL statement below (remove the
 * leading hash sign) and fill in the absolute URL to your Drupal installation.
 *
 * You might also want to force users to use a given domain.
 * See the .htaccess file for more information.
 *
 * Examples:
 *   $base_url = 'http://www.example.com';
 *   $base_url = 'http://www.example.com:8888';
 *   $base_url = 'http://www.example.com/drupal';
 *   $base_url = 'https://www.example.com:8888/drupal';
 *
 * It is not allowed to have a trailing slash; Drupal will add it
 * for you.
 */
# $base_url = 'http://www.example.com';  // NO trailing slash!

/**
 * Drupal automatically generates a unique session cookie name for each site
 * based on its full domain name. If you have multiple domains pointing at the
 * same Drupal site, you can either redirect them all to a single domain (see
 * comment in .htaccess), or uncomment the line below and specify their shared
 * base domain. Doing so assures that users remain logged in as they cross
 * between your various domains. Make sure to always start the $cookie_domain
 * with a leading dot, as per RFC 2109.
 */
# $cookie_domain = '.example.com';

/**
 * Theme debugging:
 *
 * When debugging is enabled:
 * - The markup of each template is surrounded by HTML comments that contain
 *   theming information, such as template file name suggestions.
 * - Note that this debugging markup will cause automated tests that directly
 *   check rendered HTML to fail.
 *
 * For more information about debugging theme templates, see
 * https://www.drupal.org/node/223440#theme-debug.
 *
 * Not recommended in production environments.
 *
 * Remove the leading hash sign to enable.
 */
$conf['theme_debug'] = FALSE;

/**
 * Variable overrides:
 *
 * To override specific entries in the 'variable' table for this site,
 * set them here. You usually don't need to use this feature. This is
 * useful in a configuration file for a vhost or directory, rather than
 * the default settings.php. Any configuration setting from the 'variable'
 * table can be given a new value. Note that any values you provide in
 * these variable overrides will not be modifiable from the Drupal
 * administration interface.
 */

/**
 * Variable overrides (drupal):
 */
$conf['site_name'] = 'Bracknell Forest Council - STAGING';

/**
 * Variable overrides (caching):
 */
 $conf['block_cache'] = 1;
 $conf['cache'] = 1;
 $conf['cache_lifetime'] = '43200';
 $conf['page_cache_maximum_age'] = '86400';
 $conf['page_compression'] = 1;
 $conf['preprocess_css'] = 1;
 $conf['preprocess_js'] = 1;

/**
 * Variable overrides (s3fs):
 */
$conf['s3fs_awssdk2_use_instance_profile'] = 0;
$conf['s3fs_cache_control_header'] = '';
$conf['s3fs_encryption'] = '';
$conf['s3fs_ignore_cache'] = 0;
$conf['s3fs_no_redirect_derivatives'] = 0;
$conf['s3fs_no_rewrite_cssjs'] = 1;
$conf['s3fs_presigned_urls'] = '';
$conf['s3fs_private_folder'] = 'private';
$conf['s3fs_public_folder'] = 'public';
$conf['s3fs_hostname'] = '';
$conf['s3fs_saveas'] = '';
$conf['s3fs_torrents'] = '';
$conf['s3fs_use_s3_for_private'] = 1;
$conf['s3fs_use_s3_for_public'] = 1;

/**
 * Variable overrides (smtp):
 */
$conf['smtp_host'] = '172.17.0.1';
$conf['smtp_hostbackup'] = '172.17.0.1';
$conf['smtp_password'] = '';
$conf['smtp_port'] = '1025';
$conf['smtp_protocol'] = 'standard';
$conf['smtp_username'] = '';
