/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int main ()
{
    int var2 = 5;
    void *p = malloc(128);
    char *s = "Literal string";
    void *z = malloc(128);
    void *a = malloc(16);
    void *b = malloc(16);



    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of p is %p\n", p);
    printf ("Address of s is %p\n", s);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of a is %p\n", a);
    printf ("Address of b is %p\n", b);



    return 0;
}
