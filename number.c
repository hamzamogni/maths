#include "number.h"
#include <stdio.h>
#include <stdlib.h>

void initNum(Number* a) {
    /*
     * the function initNum initialise the number
     * it takes input from user (STDIN)
     * the array is dynamically allocated
     */
    a->digits = (char *) malloc(sizeof(char));
    a->length=0;

    int i=0;

    while( (a->digits[i] = (char)getchar()) != '\n') {
        a->digits = realloc(a->digits, a->length + sizeof(char));
        a->length++; // we have to increment number of digit by one every time we add a digit to the array
        i++;
    }
    a->digits[i] = '\0'; // last bit of the final array should be \0 character
}

void printNum(Number* a) {  // simple function that print the big number in the STDOUT
    printf("[%s]\n", a->digits);
}

void affectNumber(Number* a, Number* b) {
    a->digits = b->digits;
    a->length = b->length;
}