/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;

    // memory is allocated in the stack for an array of size 5
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }

    // after the array is created and populated, the pointer to that 
    // array, located in the stack, is returned   
    return array;
}

void bar() {
    int i;

    //similar to above, memory for an array of size 5 is allocated
    //in the stack, this will be placed in the same location as the
    //array above, because local variables within functions only use
    //temporary stack space
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    //attempting to print contents of the foo array,
    //but such memory was allocated temporarily for
    //local variables on the stack within the foo()
    //and bar() functions
    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
