#include "number.h"

#define INT(a)  (a - '0') // to convert from char to integer
#define CHAR(a) (a + '0') // to convert from integer to char

Number* multiply(Number* a, Number* b) {
    Number* output;
    output = (Number*)calloc(1, sizeof(Number));

    int i=0, j=0, k=0, temp, carry;

    output->length = a->length + b->length;     // length of output is equal to length of both numbers
    output->digits = (char *) malloc((output->length + 1) * sizeof(char));
    output->digits[output->length] = '\0';     // last char should be \0
    memset(output->digits, '0', output->length); // initialising all digits to 0

    for (i = a->length - 1; i >= 0; i--) {
        for (j = b->length - 1, k = i + j + 1, carry = 0; j >= 0; j--, k--) {
            temp = INT(a->digits[i]) * INT(b->digits[j]) + INT(output->digits[k]) + carry;
            carry = temp / 10;
            output->digits[k] = CHAR(temp % 10);
        }
        output->digits[k] += carry;
    }

    removeZeroes(output); // removing 0's from beginning of the output

    return output;
}