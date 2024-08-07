// Increment and decrement operators
#include <stdio.h>

void main(){
    int x = 10, y;
    // y = ++x; // pre increment
    // printf("x: %d\n", x); // 11
    // printf("y: %d\n", y); // 11

    // post increment
    y = x++; // fist value will be assigned then increment will happen
    printf("x: %d\n", x); // 11 
    printf("y: %d\n", y); // 10

    // y = x++ can be evaluated like y = x then x += 1

    return;
}