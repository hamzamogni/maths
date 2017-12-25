#include "number.h"


Number* factorial(int num) {
    Number * temp  = strToNum("1");
    Number * fact = strToNum("1");
    int i;

    for (i = 1; i <= num; i++) {
        fact = multiply(fact, temp);
        temp = add(temp, strToNum("1"));
    }
    fact->length = strlen(fact->digits);
    return fact;

}