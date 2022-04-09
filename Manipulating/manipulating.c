/*
Origin: Henly Su, hsu31@myseneca.ca, 143334183, 04/04/2022, CPR101, Group Project
[executable filename] : [Manipulating.c]
Purpose: [Concatenate strings]
*/

#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"                                       //Include: <stdio.h>, <string.h> and the void manipulating() prototype

void manipulating() {
	/*
	Purpose: [Concatenate strings]
	*/

	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");    //Display Start of Concatenating Strings Demo
	char string1[200];
	char string2[200];
	printf("Type the 1st string (q - to quit):\n");             //Prompt user to enter a string or 'q' to quit
	gets(string1);
	while (strcmp(string1, "q") != 0) {                         //Concatenates strings1 and string2 until user enters 'q'
		printf("Type the 2nd string:\n");
		gets(string2);                                          //Prompt user to enter second string
		strcat(string1, string2);
		printf("Concatenated string is \'%s\'\n", string1);     //Display concatenated string
		printf("Type the 1st string (q - to quit):\n");
		gets(string1);
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");    //Displays after user presses the 'q' character

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here
}
