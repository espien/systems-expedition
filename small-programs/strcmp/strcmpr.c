#include "strcmpr.h"
#include <stdio.h>

int strcmpr(const char *lhs, const char *rhs) {
  for (int i = 0; lhs[i]; i++) {
    if (lhs[i] < rhs[i] || lhs[i] > rhs[i]) {
      return lhs[i] - rhs[i];
    }
  }
  return 0;
}