#include "number.h"

int main() {
    Number a[3];                        //the two numbers to sum (two instances of struct Number)

    initNum(&a[0]);
    initNum(&a[1]);

    affectNumber(&a[2], add(&a[1], &a[0]));

    printNum(&a[2]);
    return 0;
}
