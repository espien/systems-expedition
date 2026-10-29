#include "strcopy.h"
#include <stdio.h>


int main(void) {
  char str1[4] = "Cat";
  char str2[4];

  printf("First string is: %s\n", str1);
  printf("Second string is: %s\n", str2);

  strcopy(str2, str1);

  printf("The second string is now %s\n", str2);
}