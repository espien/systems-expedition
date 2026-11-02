#include <stdio.h>

int main(void) {
  char *s = "Hello, world!";           // Literal, cannot be mutated
  char t[] = "Hello, again!";          // Not a literal, can be mutated
  char t[21] = "Hello, again, again!"; // Not a literal, can be mutated
}