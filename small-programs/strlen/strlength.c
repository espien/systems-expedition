#include "strlength.h"
#include <stdio.h>

unsigned int strlength(char *str) {
  unsigned int length = 0;
  for(int i = 0;;i++) {
    if(!str[i]) {
      break;
    }
    length++;
  }
  return length;
}

size_t strlength_v2(const char *str) {
  size_t length = 0;
  while (str[length]) {
    length++;
  }
  return length;
}