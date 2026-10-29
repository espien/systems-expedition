# Write strcpy without standard library - Lessons learned

Embarasses to admit, but took me about an hour to finish again. I think, as always, I should've had read the Strings chapter in the beej's guide beforehand. I think I might have a problem with overthinking these problems.

## Lessons learned

1. In if a `string` is for example, three characters long its size is 4, due to the NUL terminator. (This took me forever to figure out)
2. It is not possible to declare a empty `string` with a char pointer. At least without `malloc`.

  ```
    // Essentially I tried this:

    char *str1 = "Cat";
    char *str2;

    // This would've been fine:

    char *str1 = "Cat";
    char str2[4];
  ```

3. The `#ifndef FILE_H`, `#define FILE_H` and `#endif` in header files prevents the header file from being included multiple times, which can be problematic.