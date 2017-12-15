#include <stdlib.h>

#include "binAddition.h"

int main() {
    Number a[3];                        //the two numbers to sum (two instances of struct Number)

    initNum(&a[0]);
    initNum(&a[1]);

    add(&a[0], &a[1]);

    return 0;
}
