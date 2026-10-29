# 5 Pointers

Data types that use more than a byte of memory, the bytes that make up the data are always adjacent to one another in memory. The ordering can differ.

Pointer is a variable that holds an address (index into memory, location, ...).

House and the houses address analogy. (The house is the actual house, but the houses address is a pointer to that house)

`%p` prints a pointer.

`&` is the `address-of` operator, it can be used to get an address of the variable. So it is a pointer.

If a data is multi-byte (more than 1 bytes) such as an integer, which is 4 bytes. A pointer to the integer is a index into memory where the first byte of data is stored in.

Pointer can be dereferenced to gain access to the original variable.

Pointers can be used cleverly with function parameters to dereference the original value inside the function body.
> **_Previous memory:_** Every argument gets copied into parameters and the function uses a copy of the argument

NULL pointer is a good sentinel value (flag, marking, a spot..). NULL pointer doesn't point ot anything, and should not be dereferenced.

The rule is that `*` goes in front of any variable that is a pointer type. It's a part of the variable, not the type.