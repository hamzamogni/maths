#include <stdlib.h>
#include <string.h>
#include "binAddition.h"

int main()
{
    Number *a, *b;                          //the two numbers to sum (two instances of struct Number)
    a = (Number *) malloc(sizeof(Number));  //allocating memory for the first number
    b = (Number*)malloc(sizeof(Number));    //allocating memory for the second number
    // initializing the two numbers (struct Number instances);
    initNum(a);
    initNum(b);

    Number* c = add(a, b); // adding the two numbers and affecting he returned output to a new number

    printNum(c); //printing the sum

    return 0;
}
