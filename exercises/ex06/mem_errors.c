/* Example code for Exercises in C.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void free_anything(int *p) {
    if (p == NULL) return;

    free(p);
    p = NULL;
}

int read_element(int *array, int index) {
    int size = sizeof(array)/sizeof(array[0]);
    if (index < 0 || index >= size) return -1;
    
    int x = array[index];
    return x;
}

int main()
{
    // commenting out to get rid of the 
    // warning that I'm not using this var
    // int never_allocated;
    int *free_twice = malloc(sizeof (int));
    int *use_after_free = malloc(sizeof (int));
    int *never_free = malloc(sizeof (int));
    int array1[100];
    int *array2 = malloc(100 * sizeof (int));

    // valgrind does not bounds-check static arrays
    read_element(array1, -1);
    read_element(array1, 100);

    // but it does bounds-check dynamic arrays
    read_element(array2, -1);
    read_element(array2, 100);

    // and it catches use after free
    free(use_after_free);
    //I dont think there's a way to catch this without a function
    //*use_after_free = 17;

    // never_free is definitely lost
    *never_free = 17;

    // the following line would generate a warning
    // free(&never_allocated);

    // but this one doesn't
    // cant check if this is allocated within the function,
    // so I have to comment it out
    // free_anything(&never_allocated);

    free(free_twice);
    // can't free twice..
    // free(free_twice);

    //freeing never free to get rid of final error
    free(never_free);
    free(array2);

    return 0;
}
