/*
Origin: Peter Wan, pwan6@myseneca.ca, 182735217, April 4 2022, CPR101, Group Project
Filename: main.c
Purpose: Start of application - runs the following functions in this order: fundamentals();, manipulating();, converting();, and tokenizing();
*/

#include "fundamentals.h"	// Includes: <stdio.h>, <stdlib.h>, <string.h> and the void fundamentals(); prototype.
#include "manipulating.h"	// Includes: <stdio.h>, <string.h>, and the void manipulating() prototype; prototype.
#include "converting.h"		// Includes: <stdio.h>, <string.h>, <stdlib.>, and the void converting(); prototype.
#include "tokenizing.h"		// Includes: <stdio.h>, <string.h>, and the void tokenizing(); prototype.

int main() {				// Start of the main application/program.
	
	fundamentals();			// Calls the void fundamentals(); function.
	manipulating();			// Calls the void manipulating(); function.
	converting();			// Calls the void converting(); function.
	tokenizing();			// Calls the void tokenizing(); function.

	return 0;				// Main function returns 0 to exit program properly.
}							// End of main function. 