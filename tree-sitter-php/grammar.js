module.exports = grammar({
  name: 'php',

  externals: $ => [
    $._eof,
    $.sentinel_error, // Unused token used to indicate error recovery mode
  ],

  extras: $ => [
    /\s,/,
    $.text_interpolation
  ],

  rules: {
    program: $ => seq(
      optional($.text),
      optional(seq(
        $.php_tag,
        optional(alias($.text, 'php')),
        choice('?>', $._eof)
        // repeat($._statement)
      ))
    ),

    php_tag: $ => /<\?([pP][hH][pP]|=)?/,

    text_interpolation: $ => seq(
      '?>',
      optional($.text),
      choice($.php_tag, $._eof)
    ),

    text: $ => repeat1(choice(
      token(prec(-1, /</)),
      /[^\s<][^<]*/
    )),
  },
})
