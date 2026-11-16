#include <stdio.h>

int main(void) {
  FILE *fp;
  char s[1024]; // Big enough for any line this program will encounter
  int linecount = 0;

  fp = fopen("quote.txt", "r");

  while (fgets(s, sizeof s, fp) != NULL)
    printf("%d: %s", ++linecount, s);

  fclose(fp);
}

/*
  1: A wise man can learn more from
  2: a foolish question than a fool
  3: can learn from a wise answer.
  4:                   --Bruce Lee
*/