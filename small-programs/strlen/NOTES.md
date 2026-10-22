# Write strlen without standard library - Lessons learned

Took me about an hour to finish without explicitly using search engines to find "C how to get the length of a string". First I took some time to figure out how to structure the program, since I have some weird fixation to try to be as "elegant" as possible in the most basic programs. Pointers did throw me off, guess I should actually read about them after this...

## Lessons learned

1. The `strlength(char *str)` is a char pointer, since String is a char pointer.
2. If making multiple modules, all of them need to be compiled.
3. `char *str = "abc"` creates a pointer to wherever "abc" is initialized in memory.
4. In C, `char *`, points to the first character of the possible string.
5. In C, string in an array of characters that ends with a NUL terminator.
6. I have no idea what the condition `*&str[i]` means? (I had it at first in the if-clause)
  - So we take the `str[i]`, which shall be 'a'
  - Then we take its memory address which shall be `0x583685817008`
  - Then we point to it again and get `0x61`, which is a hex value of 'a'
  - Long story short, they cancel each other out `str[i]` == `*&str[i]`
7. Read the actual documentation if implementing some standard functions.
