# The Titanium Rings Forever theme

TRF is a custom Drupal theme.

## Basic development instructions

TRF is compiled from Sass into CSS using `gulp`. We use `gulp-sass`, which uses
`node-sass`, which runs on `libsass`.

First, you will need to install Node.js and Gulp; ample documentation exists
online to guide you.

To compile the Sass into updated CSS, from the command line, `cd` into the theme
directory and run `npm install` and `bower install` to fetch all dependencies.
Then, run `gulp` to start watching and compiling. The default gulp task will
update documentation as necessary, as well as minify images and scripts, and
auto-prefix CSS rulesets.

## Version control

TRF's entire codebase is version-controlled with git, hosted in a public 
[GitHub account](https://github.com/rootwork/ringsforever).

Do not change anything without committing it to git; even if it's a temporary
or emergency fix, making one 5-second git commit will make it easier to track,
change, or undo in the future.

Because to date Exotica has had just one web developer, we go ahead and commit
compiled CSS and minified JavaScript to the repository. Should we have multiple
developers working together in the future, this approach could be revised.

## Developer documentation

Please review these sets of documentation before beginning development.

**Please use comments in the Sass and JavaScript files, consistent with the
documentation syntax, when adding new code.**

Documentation is critical to keeping this theme maintainable. Please do not plan
to "do it later". Do it now, as you write your code.

### [Style Guide (KSS)](/sites/all/themes/trf/documentation/styleguide/index.html)

Documents the assorted designs, components, styles and markup patterns defined
by the TRF site. You'll probably want to start here. Generated automatically
using the default `gulp` task using comments in the Sass files.

### [SassDoc](/sites/all/themes/trf/documentation/sassdoc/index.html)

Documents Sass breakpoints, functions and mixins, which are not included in a
style guide. Generated automatically using the default `gulp` task using
comments in the Sass files.

### [JSDoc](/sites/all/themes/trf/documentation/jsdoc/index.html)

Documents custom JavaScript on the TRF site.

### Coding standards

TRF includes an [.editorconfig](http://editorconfig.org/) file; you should
install the appropriate plugin for your text editor if necessary and these
standards will be enforced automatically:

* Indentation: 2 spaces, no tabs
* Insert final new line: yes

Additional standards for all files in the theme:

* 80-character wide lines, with the exception of URLs or other strings that
can't be broken across lines.

These standards are specifically designed to align with the
[Drupal coding standards](https://www.drupal.org/coding-standards).

### Standards for writing Sass files

A [Sass Lint](https://github.com/sasstools/sass-lint) file is included in the
theme to enforce the following standards. Sass Lint has
[integrations](https://github.com/sasstools/sass-lint#ide-integration) for many
text editors and IDEs.

* For class names, use SMACSS principles and BEM syntax, with styles broken into
componentized Sass partials. Note this often means altering default Drupal
templates or views to insert the appropriate class names.
* Write in SCSS format ("CSS-style"), not Sass format.
* Write rule sets across multiple lines, not all on a single line.
* Insert a space between a property's colon and its value.
* Insert a blank line between rule sets.
* Comment heavily. Adhere to the KSS syntax for documenting styles
automatically on builds, and SassDoc syntax for documenting breakpoints,
functions and mixins.
* Follow the Sass Inception Rule: Never nest more than four levels deep (and
usually only one or two).
* Strings such as URLs and font-families should be wrapped in 'single quotes'.
* Numbers should be written with a preceding 0 if less than 1, e.g. `0.5`, for
readability. The number 0 should never have units (such as px or em).
* Mathematical operations in Sass should be wrapped in percentages for
readability, e.g. `padding: (2 * $padding);`
* In general, color rules should be referencing a Sass variable; if a color that
does not have a Sass variable is being written in directly you should have a
very good reason (not laziness).
* When using multivalue rules, use a comma followed by a space, e.g.
`color: rgba(0, 0, 0, 0.1);`
* Many other conventions are followed from Hugo Giraudel's
[Sass Guidelines](http://sass-guidelin.es/); when in doubt, follow the guideline
there.
