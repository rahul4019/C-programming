// Arithmatic operators

#include <stdio.h>

void main(){
    // int a = 10, b = 7;

    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a % b = %d\n", a % b);

    int a = 10;
    float b = 7;
    // printf("a / b = %d\n", a % b) => can't use FLOAT with modulo operator
    // printf("a / b = %d\n", a / b); => format specifier must be of type float
    printf("a / b = %f\n", a / b);  
    return;
}