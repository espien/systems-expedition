#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);
}

/*
  Outputs:

    The value of i is 10
    And its address is 0x7ffddf7072a4

    
*/