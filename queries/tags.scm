(class_declaration
 name: (name) @name) @definition.class

(function_definition
 name: (name) @name) @definition.function

(function_call_expression
 function: (qualified_name (name)) @name) @reference.call

(scoped_call_expression
 name: (name) @name) @reference.call
