<?php
/**
 * @file
 * typography.features.inc
 */

/**
 * Implements hook_fontyourface_features_default_font().
 */
function typography_fontyourface_features_default_font() {
  return array(
    'EB Garamond regular (cyrillic)' => array(
      'name' => 'EB Garamond regular (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=EB Garamond&subset=cyrillic#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'EB Garamond',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"EB Garamond:regular";s:6:"subset";s:8:"cyrillic";}',
    ),
  );
}
