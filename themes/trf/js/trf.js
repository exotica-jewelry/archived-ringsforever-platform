document.addEventListener("DOMContentLoaded", function() {

  // Add captions to images with zoom set, based on their title attribute.
  var images = document.querySelectorAll( ".imagezoom-image" ),
  L = images.length,
  fig = document.createElement("figure"),
  who,
  temp
  while(L) {
    temp = fig.cloneNode(false);
    who = images[--L];
    caption = who.getAttribute("title");
    who.parentNode.insertBefore(temp, who);
    content = document.createElement( "figcaption" );
    content.className = "image__caption";
    content.innerHTML = caption;
    temp.appendChild(who);
    temp.appendChild(content);
  }

/**
 * The jQuery plugin namespace.
 * @external "jQuery.fn"
 * @see {@link http://learn.jquery.com/plugins/|jQuery Plugins}
 */

  // Add title attribute to home page featured ring blocks.
  jQuery('.featured-categories__item').attr('title', 'View all titanium rings in this category');

  // Remove image titles when they appear in home page featured ring blocks.
  jQuery('.field-name-field-cat-featured-rings img').attr('title', '');

/**
 * Tooltips
 * @function external: "jQuery.fn".tooltipster
 * @class tooltips
 */

  /**
  * Adding Tooltipster tooltip overlays.
  * @name tooltipster
  *
  * @memberOf tooltips
  * @author Caleb Jacob and Louis Ameline
  */

  // Main menu
  jQuery('.main-menu a').tooltipster({
    position: 'bottom'
  });

  // Secondary menu
  jQuery('.secondary-menu a').tooltipster({
  });

  // Home page featured rings
  jQuery('.featured-categories__item').tooltipster({
  });

  // All other links in content and footer areas
  jQuery('.section-content a[title], .section-footer a[title]').tooltipster();


/**
 * Shopping cart manipulations
 * @function external: "jQuery.fn".tooltipster
 * @class cart
 *
 * @author Ivan Boothe
 */

  // Add 'empty' and 'full' classes
  if (jQuery('.block-shopping-cart-block .view-shopping-cart .view-empty').length) {
    jQuery('.block-shopping-cart-block .view-shopping-cart').addClass('is-empty');
  }
  if (jQuery('.line-item-quantity').length) {
    jQuery('.block-shopping-cart-block .view-shopping-cart').addClass('is-full');
  }

});
