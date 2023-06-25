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
      $.php_only,
    )),

    _php_tag: $ => /<\?([pP][hH][pP]|=)?/,

    php_only: $ => seq(
      $._php_tag,
      optional($._php_content),
      choice('?>', $._eof),
    ),

    text: $ => prec.right(repeat1(/[^<]+|</)),
  },
})
