#include "number.h"
#include <stdio.h>

int main() {

    Number* b = pascalOf(5);

    int cou;
    for(cou=0; cou < 5; cou++)
        printNum(&b[cou]);

    return 0;
}
