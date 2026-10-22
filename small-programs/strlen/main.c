#include <stdio.h>
#include "strlength.h"

int main(void) {
  char *string = "Wasabi";
  const char *string_v2 = "Cookies";
  printf("The length of '%s' is %u\n", string, strlength(string));
  printf("The length of '%s' is %u (v2)\n", string_v2, strlength_v2(string_v2));
}
