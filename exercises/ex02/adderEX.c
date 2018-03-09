/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10
#define BUFFER_SIZE 20

// int end_of_file = 0;
// int bad_input = 0;

enum ErrorCode {BAD_INPUT = -1, TOO_BIG = -2, END_OF_FILE = -3};

/* add_array: Adds up the elements of an array.
*
*  array: int pointer
*  n: number of elements in the array
*
*  returns: total
*/
int add_array(int array[], int n) {
    int i;
    int total = 0;

    for (i=0; i<n; i++) {
        total += array[i];
    }
    return total;
}

/* read_integer: Reads an integer from stdin.
*
*  array: int pointer
*  n: number of elements in the array
*
*  returns: total
*/
int read_integer(int *num) {
    char *res;
    char buffer[BUFFER_SIZE];
    int number;

    // read a string
    res = fgets(buffer, sizeof(buffer), stdin);
    if (res == NULL) {
        return END_OF_FILE;
    }

    // check if the length of the string it too long
    if (strlen(buffer) == BUFFER_SIZE) {
        return TOO_BIG;
    }

    //printf("%s, %d\n", buffer, (int)strlen(buffer));

    // convert to integer
    number = atoi(buffer);

    // check for invalid input.  Notice that atoi returns 0
    // for invalid input, so we can't allow the used to enter 0.
    if (number == 0) {
        return BAD_INPUT;
    }

    *num = number;
    return 1;
}

int main()
{
    int *ans;
    ans = (int *) malloc(15);

    int i;
    int res;
    int array[ARRAY_SIZE];

    for (i=0; i<ARRAY_SIZE; i++) {
        int res = read_integer(ans);

        // printf("%d\n", res);
        // printf("%d\n", *ans);

        if (res == END_OF_FILE) {
            int total = add_array(array, i);
            printf("total %d\n", total);
            return 0;
        }

        if (res == TOO_BIG) {
            printf("input too large");
            return 0;
        }

        if (res == BAD_INPUT) {
            printf("Invalid input.\n");
            return -1;
        }
        array[i] = *ans;
    }

    // if we get to the end of the loop, the user entered
    // too many numbers
    printf("Too many numbers.\n");
    return -1;
}
