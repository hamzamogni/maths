#include "number.h"
#include <stdio.h>

int main() {

    int num;
    printf("Vous voulez calculer les coefficients de ? Donnez un nombre ");
    scanf("%d", &num);
    Number *a = pascalOf(num);
    int cou;
    for(cou=0; cou < num+1; cou++)
        printNum(&a[cou]);
    printf("\n");
    return 0;
}
