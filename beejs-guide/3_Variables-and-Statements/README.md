# 3 Variables and Statements

Memory's index is also called an address, location or a pointer
> **_NOTE:_** Pointer variables hold the address, memory's index, of other variables

Uninitialized variables have indeterminate value. Much of the time it is zero, but it can vary. Always explicitly intialize variables.

Historically C did not have a boolean type. 0's and 1's were used to determine boolean values. In C23 actual `bool`, `true` and `false` got implemented.

C also includes ternary operator:
```
y += x > 10? 17: 37;
```

Pre-and-post increment-and-decrement:

```
// Post-increment

i = 10;
j = 5 + i++;  // Compute 5 + i, _then_ increment i

printf("%d, %d\n", i, j);  // Prints 11, 15
```

```
// Pre-increment

i = 10;
j = 5 + ++i;  // Increment i, _then_ compute 5 + i

printf("%d, %d\n", i, j);  // Prints 11, 16
```

Comma operator:
> **_NOTE:_** Can be used to do multiple things in each clause of a `for` loop for example.
```
x = 10, y = 20;  // First assign 10 to x, then 20 to y
```

`sizeof` operator, tells the size (in bytes) that a particular variable or data type uses in memory. `sizeof` returns a type of `size_t`, which is an unsigned integer type. `%zu` is the format specifier of  `size_t`. Negative `size_t` values need `%zd`.
> **_NOTE:_** `sizeof` is a compile-time operation.

Switch has fall through. Given that if `break` isn't in the case, it will continue to the next case even though the 'case' does not match.
> **_NOTE:_** In pre-C23, always put a comment where a fall through is intentional.

> **_NOTE:_** In C23 use [[fallthrough]] to do fallthrough.
