module.exports = grammar({
  name: 'php',

  externals: $ => [
    $._eof,
    $._php_content,
    $.sentinel_error, // Unused token used to indicate error recovery mode
  ],

  // extras: $ => [/\s/],

  rules: {
    program: $ => repeat(choice(
      $.text,
      $.php,
    )),

    _php_tag: $ => /<\?([pP][hH][pP]|=)?/,

    php: $ => seq(
      $._php_tag,
      $._php_content,
      // /(.*?)\?>/,
      // /.*[^?][^?>]/,
      // /[^?]+|\?,/,
      // /[^?][^>]*(?:\?>)/,
      // repeat1(choice(
      //   token(prec(-1, /\?/)),
      //   /[^?][^?>]*/
      // )),
      choice('?>', $._eof),
      // optional('?>'),
    ),

    // php: $ => /[^?>]*(?:[^>?][^?]*)/,
    // php: $ => repeat1(/[^?]*\?+(?:[^>?][^?]*\?)*/),
    // php: $ => repeat1(choice(
    //   token(prec(-1, />/)),
    //   /[^\s?][^>]*/
    // )),
    // php: $ => repeat1(choice(
    //   token(prec(-1, /</)),
    //   /[^\s<][^<]*/
    // )),

    text: $ => prec.right(repeat1(/[^<]+|</)),
  },
})
