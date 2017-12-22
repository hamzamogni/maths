#include "number.h"
#include <stdio.h>

int main() {

    int num;
    Number a, b, *c;
    initNum(&a);
    initNum(&b);
    c = add(&a, &b);
    printNum(c);
    return 0;
}
