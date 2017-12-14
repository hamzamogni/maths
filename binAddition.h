#ifndef BINADDITION
#define BINADDITION


typedef struct {
    char *digits;
    size_t length;
} Number;


void initNum(Number* a);
void printNum(Number* a);
Number* add(Number* a, Number* b);

#endif
