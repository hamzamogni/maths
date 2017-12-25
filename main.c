#include "number.h"

int main() {

    int num;

    printf("you wanna calculate the factorial of ? ");
    scanf("%d", &num);

    Number *a = factorial(num);

    printNum(a);

    return 0;
}
