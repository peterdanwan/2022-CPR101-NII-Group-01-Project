/*
Origin: Lathesan Vadivelu, lvadivelu@myseneca.ca, 075216143, April 4, 2022, CPR101, Group Project
[FileName] : [fundamentals.c]
Purpose: [Indexing Strings, Finds string location if it exists]
*/


#include "fundamentals.h"																	            // Includes: <stdio.h>, <stdlib.h>, <string.h> and the void fundamentals(); prototype.

void fundamentals() {
	
/*
Purpose: [Indexing Strings, Finds string location if it exists]
*/
	
	
	
	
	
	
	
	
	/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n");													// Displays Start of Indexing Strings Demo module to User.
	char buffer1[80];
	char num_input[10];
	unsigned int position;
	printf("Type not empty string (q - to quit):\n");													// Display: Requests user to enter a String that is not empty.
	printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789");			// Prints the number range [0-9] 8 Times without any other characters
	gets(buffer1);																						// Ask user for a non empy string
	while (strcmp(buffer1, "q") != 0) {
		printf("Type the character position within the string: \n");									// Requests user to Enter a character position that is in the string
		gets(num_input);																				// Ask user for the character position within the string that was previously displayed
		position = atoi(num_input);
		if (position >= strlen(buffer1)) {
			position = strlen(buffer1) - 1;
			printf("Too big... Position reduced to max. available\n");									// Notifies user that the character position is too large, and that the position has been changed to the max allowed value
		}
		printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);			// Notifies the user what the position is of the character that the user requested inside of the index
		printf("Type not empty string (q - to quit):\n");												// Tells user to enter a non-empty string to quit the program
		printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789");     // Prints the number range [0-9] 8 Times without any other characters
		gets(buffer1);
	}

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}