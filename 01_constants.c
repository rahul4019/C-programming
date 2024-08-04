#include <stdio.h>

void main() {
    int a = 2; // integer
    printf("%d\n", a); //* %d is format specifier for signed decimal integer

    char b = 'r';
    printf("%c\n", b);

    int integer;
    char character;
    float floatingInteger; // stores value with 6 digit pricision
    double doubleInteger;

    printf("Size of int: %zu bytes\n", sizeof(integer)); //* %zu format specifier for unsigned size_t
    printf("Size of character: %zu bytes\n", sizeof(character)); 
    printf("Size of floatingInteger: %zu bytes\n", sizeof(floatingInteger)); 
    printf("Size of doubleInteger: %zu bytes\n", sizeof(doubleInteger)); 

    // char c = 'b';
    // char c = 98;
    // char c = 'z';
    // char c = 122;
    char c = 130;
    unsigned char d = -130;
    printf("%c\n", d);
    printf("%d\n", d); // add 256 with -130 will give its +ve value in unsigned range
    return;
}