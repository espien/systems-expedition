#include <stdio.h>
#define COUNT 5

int main(void)
{
  int i;
  int a[5] = {22, 37, 3490, 18, 95};  // Initialize with these values
}

int foo(void) {

  int a[5] = {22, 37, 3490};

  // is the same as:

  int b[5] = {22, 37, 3490, 0, 0}; // 5 can be left off, C computes the size automatically

}

int bar(void) {

  int a[10] = {0, 11, 22, [5]=55, 66, 77}; // Contains: 0 11 22 0 0 55 66 77 0 0

}

int doo(void) {

  int a[COUNT] = {[COUNT-3]=3, 2, 1}; // Gives us: 0 0 3 2 1

}