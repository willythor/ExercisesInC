/*
* Program to calculate the number of cards in the shoe.
* This code is released under the MIT License.
* By Will Thorbecke
*/

#include <stdio.h>
#include <stdlib.h>

/* Increments/decrements the total card counting count

cardVal: integer value of the given card
countVal: current integer card counting value 
*/
void adjustCount (int cardVal, int countVal) {
	if ((cardVal > 2) && (cardVal < 7)) {
		countVal++;
	} else if (cardVal == 10) {
		countVal--;
	}
}


/*Returns the value of an inputted card

card_array: contains the first two characters of the name of the card
*/
int getVal (char card_array[]) {
	int val = 0;

	switch(card_array[0]) {
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			val = -1;
			break;
		default:
			val = atoi(card_array);
		}

	return val;
}

/* Prompts the user for input and puts the reply in the given char array
User input is truncated to the first two characters.

card_array: char array where named of card is stored
*/
void getCard (char card_array[]) {
	puts ("Enter the card_name: ");
	scanf("%2s", card_array);
}


/* Sets up and runs the main card counting program 

card_name: char array where named of card is stored
count: current integer card counting value 
val: integer value of current card
*/
int main ()
{
	char card_name[3];
	int count = 0;
	int val = 0;

	while (card_name[0] != 'X') {
		getCard(card_name);

		val = getVal(card_name);

		if ((val < 1) || (val > 10)) {
			if (val == -1) {
				continue;
			}
			puts("I don't understand that value!");
			continue;
		}

		adjustCount(val, count);

		printf("Current count: %i\n", count);
	}

	return 0;
}


