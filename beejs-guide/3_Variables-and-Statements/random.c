#include <stdio.h>   // For printf
#include <stdlib.h>  // For srand
#include <time.h>

int main(void)
{
    int r;
    srand(time(NULL));

    do {
        r = rand() % 100; // Get a random number between 0 and 99
        printf("%d\n", r);
    } while (r != 37);    // Repeat until 37 comes up
}