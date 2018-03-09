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
<<<<<<< HEAD
    char *s = "Literal string";
    void *z = malloc(128);
    void *a = malloc(16);
    void *b = malloc(16);


=======
    char *s = "Hello, World";
>>>>>>> f1730219000dea2729d3a9625259830250492bea

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
<<<<<<< HEAD
    printf ("Address of p is %p\n", p);
    printf ("Address of s is %p\n", s);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of a is %p\n", a);
    printf ("Address of b is %p\n", b);


=======
    printf ("p points to %p\n", p);
    printf ("s points to %p\n", s);
>>>>>>> f1730219000dea2729d3a9625259830250492bea

    return 0;
}
