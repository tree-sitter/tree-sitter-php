==========
Method modifier can be left out
==========

<?php

interface test {
    function bar();
}

?>

---

(program
    (interface_declaration
        (name)
        (method_declaration
            (name)
            (formal_parameters)
        )
    )
)
