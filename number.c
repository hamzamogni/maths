#include "number.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void initNum(Number* a) {
    /*
     * the function initNum initialise the number
     * it takes input from user (STDIN)
     * the array is dynamically allocated
     */
    a->digits = (char *) calloc(1, sizeof(char));
    a->length=0;

    int i=0;

    while( (a->digits[i] = (char)getchar()) != '\n') {
        a->digits = realloc(a->digits, a->length+1 + sizeof(char));
        a->length++; // we have to increment number of digit by one every time we add a digit to the array
        i++;
    }
    a->digits = realloc(a->digits, a->length+1 + sizeof(char)); // last bit of the final array should be \0 character
    a->digits[a->length+1] = '\0';
}

void printNum(Number* a) {  // simple function that print the big number in the STDOUT
    printf("%s ", a->digits);
}

void affectNumber(Number* dest, Number* src) {
    dest->digits = src->digits;
    dest->length = src->length;
}

Number* strToNum(char* numStr) {
    Number* ret = (Number*)calloc(1, sizeof(Number));

    ret->digits = numStr;
    ret->length = strlen(numStr);

    return ret;
}

void removeZeroes(Number *a) {
    int i, j=0;

    for(i=0; i < a->length-1; i++)
        if      (a->digits[i] != '0')  break;
        else if (a->digits[i] == '0')  j++;

    a->digits += j;
    a->length -= j;
}