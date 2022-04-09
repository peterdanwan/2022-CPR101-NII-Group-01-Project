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
	char string1[80];
	char string2[80];
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
	printf("*** Start of Comparing Strings Demo ***\n");			//Display Start of Comparing Strings Demo
	char compare1[80];
	char compare2[80];
	int result;
	printf("Type the 1st string to compare (q - to quit):\n");		//Prompt user to enter a string or 'q' to quit
	gets(compare1);													//Prompt user for first string
	while (strcmp(compare1, "q") != 0) {							//Concatenates strings1 and string2 until user enters 'q'
		printf("Type the 2nd string to compare:\n");
		gets(compare2);												//Prompt user for second string
		result = strcmp(compare1, compare2);						//Compare variable compare1 and compare2 to see if they're the same
		if (result < 0)
			printf("1st string is less than 2nd\n");				//Display if compare1 is less than compare2
		else if (result == 0)
			printf("1st string is equal to 2nd\n");					//Display if compare1 is equal to compare2
		else
			printf("1st string is greater than 2nd\n");				//Display if compare1 is greater than compare2
		printf("Type the 1st string to compare (q - to quit):\n");
		gets(compare1);												//Prompt user for first string
	}
	printf("*** End of Comparing Strings Demo ***\n\n");			//Displays after user presses the 'q' character

/* Version 3 */
//>> insert here
}
