#ifndef BINADDITION
#define BINADDITION

#include <stdlib.h>


typedef struct {
    char *digits; //array containing the whole number
    size_t length; //number of digits in the number (length of the number)
} Number;

void affectNumber(Number* dest, Number* src);
void initNum(Number* a);
Number* strToNum(char* numStr);
void printNum(Number* a);
void removeZeroes(Number *a);
Number* add(Number* a, Number* b);




Number* pascalOf(int a);

#endif
