#ifndef BINADDITION
#define BINADDITION


typedef struct {
    char *digits; //array containing the whole number
    size_t length; //number of digits in the number (length of the number)
} Number;

Number* affectNumber(Number* a, Number* b);
void initNum(Number* a);
void printNum(Number* a);
Number* add(Number* a, Number* b);

#endif
