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

});
