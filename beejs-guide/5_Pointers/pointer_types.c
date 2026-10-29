int main(void)
{
    int i;  // i's type is "int"
    int *p; // p's type is "pointer to an int", or "int-pointer"

    p = &i;  // p is assigned the address of i--p now "points to" i

    i = 10; // i is now 10
    *p = 20; // the thing p points to (namely i!) is now 20!

    printf("i is %d\n", i);   // prints "20"
    printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!
}