# 2 Hello World

 Compilation has two stages: the preprocessor and the compiler. In `C`, anything that starts with a `#` is operated by the preprocessor before the compiler even starts.
 Then as the results are ready, compiler starts and produces machine code.

 In short: `C` is written -> preprocessor produces an output -> compiler translates the output to machine code -> machine code talks to the bare metal.

 Common preprocessor directives are `#include` and `#define`.

 Header files end with a `.h`, `stdio.h` is the 'standard' library and stands for `Standard I/O`

 `main()` function is called automatically when a program starts.

`gcc -o hello hello.c` means: "compile hello.c, and output an executable called hello". > **_HDSUP:_** It is possible to compile multiple files into a one big executable.

