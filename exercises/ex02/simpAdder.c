#include <stdio.h>
#include <string.h> 
#include <ctype.h> 
#include <stdbool.h>

/*
takes in a char array and len as
an input and cycles through the 
array and checks that each val
up to the index len is a valid digit
*/
bool isDigit(char b[], int len){	

    for (int i = 0; i < len; i++) {
    	if (!isdigit(b[i])) {
    		return false;
    	}
    }

    return true;
}

/*takes in a buffer and enters
the users command line input into
that buffer
*/
bool getInput(char b[]) {

	printf("enter number: ");

	if (fgets(b, 50, stdin) == NULL) {
		return false;
	}

	return true;
}

/* takes in an array of ints and 
returns the sum of all the ints in that 
array up to the index len
*/
int sumDigits(int integers[], int len) {

	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum = sum + integers[i];
	}

	return sum;
}


/* Continuously user for integers
once user inputs ctrl-D, the sum of all the previous
integers are added up and is then printed out
*/
int main() {

	int ints[100];
	char buffer[50];
	int val, len, sum; 
	int maxLen = 10;
	int i = 0;

    while (1) {

    	if (!getInput(buffer)) {
    		sum = sumDigits(ints, i);
    		printf("the sum of the digits is %d\n", sum);
    		return 0;
    	}

        len = strlen(buffer) - 1;
	 
        if (len > maxLen) {
        	printf("your input is too longer");
        	return 0;
        }

		if (!isDigit(buffer,len)) {
			printf("you didn't input an integer");
        	return 0;
		}

		val = atoi(buffer);
		ints[i] = val;
		i++;

		printf("you entered %d\n", val);
	}

	return 0;
}


