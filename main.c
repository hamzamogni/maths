#include <stdio.h>
#include <stdlib.h>

#include "binAddition.h"

int main()
{
    Number a, b;

    initNum(&a);
    initNum(&b);

    Number c = add(&a, &b);

    printNum(&c);



    return 0;
}

