/*
 Origin: Sebastian Rubina, srubina-sanchez@myseneca.ca, 150640217, 04/APR/2022, CPR101, Group Project
 File name: tokenizing
 Purpose: Separates a string into words (space separated)
 */

#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

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
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[200];
    char* phrase;
    int p_counter;
    printf("Type a few phrases separated by comma(q - to quit): \n");
    gets(phrases);                                                      // User inputs phrase
    while (strcmp(phrases, "q") != 0) {                                 // Checks if user input q (for quit, else)
        phrase = strtok(phrases, ",");
        p_counter = 1;                                                  // Initializes phrase counter
        while (phrase) {
            printf("Phrase $%d is \'%s\'\n", p_counter++, phrase);      // Prints phrase number and phrase value, increases counter
            phrase = strtok(NULL, ",");                                 // Passes NULL pointer to scan for new phrases
        }
        printf("Type a few phrases separated by comma(q - to quit): \n");
        gets(phrases);
    }
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

/* Version 3 */
//>> insert here


}
