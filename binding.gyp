{
  "targets": [
    {
      "target_name": "tree_sitter_php_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tree-sitter-php/src",
        "tree-sitter-php-only/src"
      ],
      "sources": [
        "tree-sitter-php/src/parser.c",
        "tree-sitter-php-only/src/parser.c",
        "tree-sitter-php-only/src/scanner.c",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99"
      ]
    }
  ]
}
