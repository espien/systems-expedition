#include "strcopy.h"

char *strcopy(char *destination, const char *source) {
  for(int i=0;source[i];i++){
    destination[i] = source[i];
  }
  return destination;
}