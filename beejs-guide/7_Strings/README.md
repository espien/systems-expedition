# 7 Strings

Just like arrays, strings are also pointers

Pointers to string literals cannot be changed.

An array that is initialized by a string with double quotes is not actually a string literal.

In C, a string is defined by, being a pointer to the first character in the string, and having a zero-balued byte (NUL character) somewhere in memory after the pointer that indicates the end of the string.

NUL character can be written in C code as \0

Assignment operator (=) can't be used to copy a string. It only makes a copy of the pointer to the first character.
