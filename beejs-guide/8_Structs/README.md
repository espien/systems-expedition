# 8 Structs

`struct` is a user-definable type, that holds multiple pieces of data. Just like a `class` **without methods**, for example.

`struct` can be passed to a function by: passing the `struct`, passing a pointer to the `struct`.

There are "basically" two cases when a pointer to the `struct` is passed:

1. The function needs to be able to make changes to the `struct` that was passed in.
2. The `struct` is somewhat large and it's more expensive to copy that onto the stack than it is to just copy a pointer.

>**_NOTE_** It's far more common to pass a pointer to a `struct` to a function

When accessing fields:

1. Use dot (.field_name), when you have a `struct`.
2. Use arrow (->), when you have a pointer to a `struct`.

When comparing `struct`s, each field should be compared one at a time.