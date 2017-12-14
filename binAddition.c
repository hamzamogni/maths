#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binAddition.h"


void initNum(Number* a) {
    a->length=0;

    a->digits = (char*)malloc(sizeof(char));
    int i=0;

    while( (a->digits[i] = (char)getchar()) != '\n') {
        a->digits = realloc(a->digits, strlen(a->digits) + sizeof(char));
        a->length++;
        i++;
    }
    a->digits[i] = '\0';
}

void printNum(Number* a) { printf("[%s]\n", a->digits);}

Number add(Number* a, Number* b){
    Number output;

    Number* x = (a->length >= b->length) ? a : b;
    Number* y = (a->length >= b->length) ? b : a;

    int j = x->length-1,
        k = y->length-1,
        temp,
        remainder = 0,
        i;

    output.digits = (char*)calloc(x->length, sizeof(char));
    output.length = x->length;
    output.digits[output.length] = '\0';

    for(i= output.length-1; i >= 0; i--, j--, k--) {
        if (k >= 0) {
            temp = ((x->digits[j] + y->digits[k]) - 2 * '0' + remainder);
            remainder = temp >= 10 ? 1 : 0;
            output.digits[i] = temp >= 10 ? (temp - 10) + '0' : (temp + '0');
        } else {
            temp = ((x->digits[j] - '0') + remainder);
            remainder = temp >= 10 ? 1 : 0;
            output.digits[i] = temp >= 10 ? (temp - 10) + '0' : (temp + '0');
        }
    }

    if (remainder == 0)
        return output;
    else {
        output.digits = realloc(output.digits, output.length+1);
        output.length++;
        for(i=output.length; i>0; i--) {
            output.digits[i] = output.digits[i-1];
        }
        output.digits[0] = '1';
        return output;
    }

}