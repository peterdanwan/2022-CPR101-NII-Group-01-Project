/*
 Origin: Sebastian Rubina, srubina-sanchez@myseneca.ca, 150640217, 04/APR/2022, CPR101, Group Project
 tokenizing.c : 
 Purpose (Version 1): Separates a string into words (space separated)
 Purpose (Version 2): Separates comma delimited phrases
 */

#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS

void tokenizing() {
/* Version 1 */
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[200];
    char* word;
    int w_counter;
    printf("Type a few words separated by space(q - to quit):\n");
    gets(words);                                                        // User inputs string
    while (strcmp(words, "q") != 0) {                                   // Checks if user input q (for quit), else runs code
        word = strtok(words, " ");                                      // Gets the first word (sets " " for delimiter)
        w_counter = 1;                                                  // Initializes word counter
        while (word) {
            printf("Word #%d is \'%s\'\n", w_counter++, word);          // Prints word number and word value, increases counter
            word = strtok(NULL, " ");                                   // Passes NULL pointer to scan for new words
        }
        printf("Type a few words separated by space (q - to quit):\n");
        gets(words);
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");

/* Version 2 */
//>> insert here

/* Version 3 */
//>> insert here


}
