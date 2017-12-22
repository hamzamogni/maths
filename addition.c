#include <stdlib.h>

#include "number.h"


Number* add(Number* a, Number* b) {
    /*
     * the add function takes pointer to the two big numbers to add as arguments
     * it returns a pointer to the sum of the two big numbers
     * all numbers (Number struct instances are dynamically allocated)
     * we should mention that the sum of two numbers with N digits is a number with N or N+1 digits,
     * so minimum memory that should be allocated for output array is N (which is the length of the biggest added numbers)
     */
    Number* output;
    output = (Number*)calloc(1, sizeof(Number));

    Number* x = (a->length >= b->length) ? a : b; // storing the biggest number in x
    Number* y = (a->length >= b->length) ? b : a; // storing the smallest number in y

    int j = x->length-1, // counter on x
        k = y->length-1, // counter on y
        temp,
        remainder = 0,
        i;

    output->digits = (char*)calloc(x->length+1, sizeof(char)); // allocating memory (length of the biggest number)
    output->length = x->length;                              // updating output length
    output->digits[output->length] = '\0';                   // last output bit should be \0 character

    for(i= output->length-1; i >= 0; i--, j--, k--) { // the loop sums the numbers bit by bit
        if (k >= 0) {
            temp = ((x->digits[j] + y->digits[k]) - 2 * '0' + remainder);
            remainder = temp >= 10 ? 1 : 0;
            output->digits[i] = temp >= 10 ? (temp - 10) + '0' : (temp + '0');
        } else {
            temp = ((x->digits[j] - '0') + remainder);
            remainder = temp >= 10 ? 1 : 0;
            output->digits[i] = temp >= 10 ? (temp - 10) + '0' : (temp + '0');
        }
    }

    if (remainder != 0) {              // if last remainder is one then the first bit should be 1
        output->digits = realloc(output->digits, output->length+2); // adding two bits to the output
        output->digits[output->length+1] = '\0';
        output->length++;                                           // updating output length
        for(i=output->length; i>0; i--) //shifting the array by one bit to the right
            output->digits[i] = output->digits[i-1];

        output->digits[0] = '1'; // first bit should be 1
    }

    removeZeroes(output);
    return output;           // we return the final output

}