/*
Origin: Henly Su, hsu31@myseneca.ca, 143334183, 04/04/2022, CPR101, Group Project
[executable filename] : [Manipulating.c]
Purpose: [Concatenate strings]
*/

#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"                                       //Include: <stdio.h>, <string.h> and the void manipulating() prototype

void manipulating() {
	/*
	Purpose: [Concatenate strings] [Compare strings] [Search for strings]
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
	printf("*** Start of Searching Strings Demo ***\n");
		char big_string[80];
		char sub_string[80];
		char* address;																	//Declaring a pointer toa variable type char
		printf("Type the big string (q - to quit):\n");									//Prompt user to enter a big string
		gets(big_string);
		while (strcmp(big_string, "q") != 0) {											//Prompts user to enter strings until 'q' is entered
			printf("Type the substring:\n");
			gets(sub_string);															//Prommpts user for a substring
			address = strstr(big_string, sub_string);									//Finds the first occurence of sub_string in big_string
			if (address != NULL)
				printf("Found at %1d position\n", (long)address - (long)big_string);	//Display when the address is not equal to NULL
			else
				printf("Not found\n");													//Display when the address is equal to NULL
			printf("Type the big string (q - to quit):\n");
			gets(big_string);															//Prompts user for a big string
		}
		printf("*** End of Searching STrings Demo ***\n\n");							//Displays after user presses the 'q' character
}
