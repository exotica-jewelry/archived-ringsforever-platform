# Overview

This page documents style components, variables, and base markup defined by the
theme and its base theme.

The content below is generated from code comments in the project&rsquo;s Sass
files and processed using [kss-node](https://github.com/kss-node/kss-node),
which uses [Knyle Style Sheets (KSS)](https://github.com/kneath/kss).

The styleguide sections are defined in `sass/style.scss`.

Note that [per the KSS documentation](http://warpspire.com/kss/syntax/), "not
every CSS rule should be documented." Only rules that describe visual UI
elements are documented in the styleguide. Therefore, there is not (and does not
need to be) a 1:1 correspondence between the Styleguide sections and the Sass
folders and partials.

**For documentation of Sass breakpoints, functions and mixins in this theme and
its parent theme,
[see this theme's SassDoc](/themes/trf/documentation/sassdoc/index.html).**

## Also see

- The theme's
**[README file](https://github.com/rootwork/ringsforever/blob/master/themes/trf/README.md)**
outlines the general approach to developing with this theme, gives installation
instructions, and lists coding standards.
- Documentation of the theme's **Sass breakpoints, functions and
mixins**:
[TRF SassDoc](/sites/all/themes/trf/documentation/sassdoc/)
- Documentation of the theme's **JavaScript**:
[TRF JSDoc](/sites/all/themes/trf/documentation/jsdoc/)

## Resources

- [KSS syntax](https://github.com/kss-node/kss/blob/spec/SPEC.md), including
annotations specific to KSS-node.
- [KSS-node documentation](https://github.com/kss-node/kss-node/wiki) &#8212;
our styleguide home page (the source of this information) is located at
`documentation/styleguide.md`.

## Updating this documentation

This style guide is pulled directly from Sass files using KSS syntax. We use
[Gulp.js](http://gulpjs.com/) to update this documentation automatically when
theme files are updated &#8212; documentation generation is part of the default
`gulp` task. See [this theme's gulpfile](/sites/all/themes/trf/gulpfile.js)
for more.
