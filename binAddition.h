#ifndef MATHS_BINADDITION_H
#define MATHS_BINADDITION_H


typedef struct {
    char *digits;
    size_t length;
} Number;


void initNum(Number* a);
void printNum(Number* a);
Number add(Number* a, Number* b);

#endif //MATHS_BINADDITION_H
