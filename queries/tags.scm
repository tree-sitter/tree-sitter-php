(class_declaration
 name: (name) @name) @class

(function_definition
 name: (name) @name) @function

(function_call_expression
 function: (qualified_name (name)) @name) @call
