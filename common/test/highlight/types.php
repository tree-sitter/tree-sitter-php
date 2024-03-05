<?php


function b(
  int $a,
  // <- type.builtin

  string $b,
  // <- type.builtin

  Person $e
  // <- type
): Dog {}
// ^ type

function a(array $b, Something $c) {
  //       ^ type.builtin
  //                  ^ type
  echo (int) $foo;
  //     ^ type.builtin
}

class A {
  public function foo(): self {}
  //                     ^ type
  private function baz(): static {}
}
