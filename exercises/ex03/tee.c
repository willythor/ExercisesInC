
#include <stdio.h>

void pipe(char *output) {
    FILE *fp = fopen(output, "w");
    char c = fgetc(stdin);

    while (c != EOF) {
    	fputc(c, fp);
    	putchar(c);
    	c = fgetc(stdin);
    }
}

int main(int argc, char *argv[]){

	if (argv[1] == NULL) {
		printf("An output file is needed");
		return 0;
	}

	pipe(argv[1]);

    return 0;
}


/*
At first it was confusing to me that typing a command like `ls | teeMod ____` 
would result in all my files being availiable within my program by using 
`stdin`. My logic was that everything executed before calling my program
couldn't be accessed by my program. Took me some time to understand that 
the pipe command was sending everything to the tee command.

Afterwards I found it pretty straight forward in terms of accessing stdin,
and I found on stack-overflow that `putchar` outputs to stdout. 
*/

/*
The professional code allows for pipping to multiple files, there is way 
more error catching, and more options are availiable to the user (e.g., `-a`).
It makes my code seem way too simple...
*/