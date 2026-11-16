#include <stdio.h>

int main(void) {
  FILE *fp;
  int x = 32;

  fp = fopen("output.txt", "w"); // could be replaced with fp = stdout; (Which
                                 // then outputs to the console).

  fputc('B', fp);
  fputc('\n', fp); // newline
  fprintf(fp, "x = %d\n", x);
  fputs("Hello, world!\n", fp);

  fclose(fp);
}

/*
Creates a file:

  B
  x = 32
  Hello, world!

*/