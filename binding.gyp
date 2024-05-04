{
  "targets": [
    {
      "target_name": "tree_sitter_php_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "php/src",
      ],
      "sources": [
        "php/src/parser.c",
        "php/src/scanner.c",
        "php_only/src/parser.c",
        "php_only/src/scanner.c",
        "bindings/node/binding.cc",
      ],
      "cflags_c": [
        "-std=c11",
        "-Wno-unused-value",
      ]
    }
  ]
}
