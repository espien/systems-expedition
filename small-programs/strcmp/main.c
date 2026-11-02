#include "strcmpr.h"
#include <stdio.h>

void test(const char *lhs, const char *rhs) {
  const int cmpr = strcmpr(lhs, rhs);
  const char *text = cmpr < 0   ? "is before"
                     : cmpr > 0 ? "is after"
                                : "is equal to";
  printf("[%s] %s [%s]\n", lhs, text, rhs);
}

int main(void) {
  const char *str = "Hooligan";

  test(str, "Hooligan");
  test(str, "Eye");
  test(str, "Hooligam");
  test(str, "Iooligan");
}