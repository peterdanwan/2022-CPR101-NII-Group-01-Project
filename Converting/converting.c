/*
Origin: Peter Wan, pwan6@myseneca.ca, 182735217, April 4 2022, CPR101, Group Project
Filename: converting.c
Purpose: Converts Strings to Ints Converts Strings to Doubles
*/

// CONVERTING V1
#include "converting.h"												// Includes: <stdio.h>, <string.h>, <stdlib.>, and the void converting(); prototype

void converting() {													// Start of Program
/*

	Purpose: Converts Strings to Ints Converts Strings to Doubles

*/


/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n");	// Display Start of Converting Strings module to User.
	char int_string[80];
	int int_number;
	printf("Type the int numeric string (q - to quit):\n");			// Prompts User to enter a numeric string or press q to quit.
	gets(int_string);
	while (strcmp(int_string, "q") != 0) {							// Convert user's string to an int and ask them to do it again so long as they don't enter q.
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string);
	}																// While-loop ends. 
	printf("*** End of Converting Strings to int Demo ***\n\n");	// After user enters q this message will display and this program ends.

																	// End of Program
/* Version 2 */
	printf("*** Start of Converting Strings to double Demo ***\n");	// Display Start of Converting Strings to double module to User.
	char double_string[80];
	double double_number;
	printf("Type the double numeric string (q - to quit): \n");		// Prompts User to enter a numeric string or press q to quit.
	gets(double_string);
	while (strcmp(double_string, "q") != 0) {							// Convert user's string to a long and ask them to do it again so long as they don't enter q.

		double_number = atof(double_string);
		printf("Converted number is %f\n", double_number);
		printf("Type the double numeric string (q - to quit):\n");
		gets(double_string);
	}																// While-loop ends. 

	printf(" End of Converting Strings to double Demo ***\n\n");	// After the while-loop, this message will display.

}																// End of Program curly brace.

/* Version 3 */
//>> insert here



