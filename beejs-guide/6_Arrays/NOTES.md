# 6 Arrays

Under the hood arrays are just pointers.

Arrays must have a size, such as 4 (elements, items..).

If array is passed to a function, a pointer to the first element is passed.

Arrays can be initialized with fewer items than there is room for in the array. Rest will be initialized with zero.

Arrays can be accessed from out of bounds, but it causes `undefined` behaviour which should not be done.

The most common function signature for arrays is `int *array`, not `array[]`, nor `array[5]`. But all of them work.
> **_NOTE:_** With type `int *` the array can be accessed 'normally' in the function body, such as a[i].

Multidimentional arrays need to be passed explicitly in function parameters `a[2][3]`, or `a[][3]`.
> **_NOTE:_** The compiler only needs the second dimension so it can figure out how far in memory to skip for each increment of the first dimension.