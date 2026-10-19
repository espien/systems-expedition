# Functions

In functions arguments are copied into the parameters.

`void` in function parameters indicates that the functions accepts no arguments.
> **_HDSUP:_**  In C23, an empty parameter list means the same thing, but explicit `void` is preferred.

function prototypes are functions without a body, for example: `int foo(void);`. These can be called before it's definition, given that the prototype is declared before the callee.

With a prototype function `void` should always be used if the parameter list is empty.
> **_HDSUP_** Without it, all type checking is turned off and the function won't be a prototype then at all. It's a forward declaration.

