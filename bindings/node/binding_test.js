/// <reference types="node" />

const assert = require("node:assert");
const { describe, it } = require("node:test");

const Parser = require("tree-sitter");
const { php, php_only } = require("../..");

describe("PHP", () => {
  const parser = new Parser();
  parser.setLanguage(php);

  it("should be named php", () => {
    assert.strictEqual(parser.getLanguage().name, "php");
  });

  it("should parse source code", () => {
    const sourceCode = "<?php echo 'Hello, World!';";
    const tree = parser.parse(sourceCode);
    assert(!tree.rootNode.hasError);
  });
});

describe("PHP Only", () => {
  const parser = new Parser();
  parser.setLanguage(php_only);

  it("should be named php_only", () => {
    assert.strictEqual(parser.getLanguage().name, "php_only");
  });

  it("should parse source code", () => {
    const sourceCode = "echo 'Hello, World!';";
    const tree = parser.parse(sourceCode);
    assert(!tree.rootNode.hasError);
  });
});
