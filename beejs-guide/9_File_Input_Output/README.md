# File Input/Output

Streams are largely categorized two different ways: text and binary.

`EOF` is the reason why `fgetc()` and similar functions return an `int` instead of a `char`. Since `fgetc()` needs to be able to return any byte and `EOF`, it needs to be a wider type that can hold more values. Therefore its an `int`. (Unless returned value is compared agains `EOF`, deep down it's a `char`).

Read a single character: `fgetc()`.

Read a single line: `fgets().`

`fscanf()` can be used to get formatted output from a file.
>**_NOTE_** `scanf()`-style functions can be hazardous with untrusted input. The buffer can overflow if field widths aren't specified when using `%s`. Also invalid numeric conversion results in undefined behavior. The safe thing to do with untrusted input is to use `%s` with a field width, then use functions like `strtol()` or `strtod()` to do the conversions.

Write a single character: `fputc()`.

Write a single line: `fputs()`.

Write formatted output: `fprintf()`.

Binary files work similarly to text files, except the I/O subsystem doesn't perform any translations on the data.

When opening or writing to a binary file "b" needs to be added, such as `rb` or `wb`.

Most common functions are `fread()` and `fwrite()`.

Binary data should be serialized when written into a stream, due to portability reasons.