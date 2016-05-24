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

/**
 * Tooltips
 * @function external:"jQuery.fn".tooltipster
 * @class tooltips
 */

  /**
  * Adding Tooltipster tooltips for links with titles
  * @name tooltipster
  *
  * @memberOf tooltips
  * @author Caleb Jacob and Louis Ameline
  */
  jQuery('.main-menu a').tooltipster({
    position: 'bottom'
  });

  jQuery('a[title]').tooltipster();

});
