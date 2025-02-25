<?php

namespace A\B;
//        ^ @module
//          ^ @module

use Baz as Baaz;
//  ^^^ @type
//         ^^^^ @type
use Foo\Baz as Baaz;
//  ^^^ @module
//      ^^^ @type
//             ^^^^ @type

use Foo\{Bar, Baz as Baaz};
//       ^^^ @type
//            ^^^ @type
//                   ^^^^ @type

use function foo as fooo;
//           ^^^ @function
//                  ^^^^ @function
//
use function Foo\foo as fooo;
//           ^^^ @module
//               ^^^ @function
//                      ^^^^ @function

// TODO
use function Foo\{bar, foo as fooo};

use const FOO as FOOO;
//        ^^^ @constant
//               ^^^^ @constant
use const Foo\FOO as FOOO;
//        ^^^ @module
//            ^^^ @constant
//                   ^^^^ @constant

// TODO
use const Foo\{FOO as FOOO, BAR};

use Foo\Baz\{
//  ^^^ @module
//      ^^^ @module
  Bar as Barr,
//^^^ @type
//       ^^^^ @type
  Foo\Bar as Barr,
//^^^ @module
//    ^^^ @type
//           ^^^^ @type
  function foo as fooo,
//         ^^^ @function
//                ^^^^ @function
  function Foo\foo as fooo,
//         ^^^ @module
//             ^^^ @function
//                    ^^^^ @function
  const FOO as FOOO,
//      ^^^ @constant
//             ^^^^ @constant
  const Foo\FOO as FOOO,
//      ^^^ @module
//          ^^^ @constant
//                 ^^^^ @constant
};

class Foo {
    public function foo() {
        Bar::foo();
//      ^^^ @type
        \Bar::foo();
//       ^^^ @type
        Foo\Bar::foo();
//      ^^^ @module
//          ^^^ @type
        \Foo\Bar::foo();
//       ^^^ @module
//           ^^^ @type
        namespace\Bar::foo();
//      ^^^^^^^^^ @module.builtin
//                ^^^ @type
        namespace\Foo\Bar::foo();
//      ^^^^^^^^^ @module.builtin
//                ^^^ @module
//                    ^^^ @type
        new Bar();
//          ^^^ @constructor
        new \Bar();
//           ^^^ @constructor
        new Foo\Bar();
//          ^^^ @module
//              ^^^ @constructor
        new \Foo\Bar();
//           ^^^ @module
//               ^^^ @constructor
        new namespace\Bar();
//          ^^^^^^^^^ @module.builtin
//                    ^^^ @constructor
        new namespace\Foo\Bar();
//          ^^^^^^^^^ @module.builtin
//                    ^^^ @module
//                        ^^^ @constructor
        BAZ;
//      ^^^ @constant
        \BAZ;
//       ^^^ @constant
        Foo\BAZ;
//      ^^^ @module
//          ^^^ @constant
        \Foo\BAZ;
//       ^^^ @module
//           ^^^ @constant
        namespace\BAZ;
//      ^^^^^^^^^ @module.builtin
//                ^^^ @constant
        namespace\Foo\BAZ;
//      ^^^^^^^^^ @module.builtin
//                ^^^ @module
//                    ^^^ @constant
        foo();
//      ^^^ @function
        \foo();
//       ^^^ @function
        Foo\foo();
//      ^^^ @module
//          ^^^ @function
        \Foo\foo();
//       ^^^ @module
//           ^^^ @function
        namespace\foo();
//      ^^^^^^^^^ @module.builtin
//                ^^^ @function
        namespace\Foo\foo();
//      ^^^^^^^^^ @module.builtin
//                ^^^ @module
//                    ^^^ @function
  }
}
