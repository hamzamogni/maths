#include "number.h"

Number* pascalOf(int a) {
    Number **ret;
    ret = (Number **) calloc(2, sizeof(Number *));     // allocating two lines of Numbers arrays
    ret[0] = (Number *) calloc(a + 1, sizeof(Number)); // each number N has N+1 coefficients
    ret[1] = (Number *) calloc(a + 1, sizeof(Number));

    affectNumber(&ret[0][0], strToNum("1"));           // first number of each line should be set to 1
    affectNumber(&ret[1][0], strToNum("1"));

    int i = 0, line=1, col = 1;

    /*
     * the looping that will calculate the coeffitients
     * calculations starts in the second line
     * '' line = !line '' is a technique to switch between lines (it is either 1 or 0)
     */
    for(line=1; i++ < a+1; line = !line)
        for(col=1; col < a+1; col++)
            affectNumber(&ret[line][col], add(&ret[!line][col - 1], &ret[!line][col]));


    return ret[line];
}