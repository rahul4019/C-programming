#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    int b = 20, *ptr = &b;

    // char c = 'r';
    // int *ptr1 = &c; // wrong datatype of variable for this pointer

    // float x,y;
    // int a, *ptr3;
    // ptr3 = &x; // wrong datatype of variable for this pointer
    // ptr3 = &y; // wrong datatype of variable for this pointer

    printf("%d", p);

    return 0;
}