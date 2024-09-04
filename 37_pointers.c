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

    printf("%d\n", p); // will print address of the variable stored in pointer p as integer
    printf("%d\n", *p); // will print the value of variable it is pointing to

    printf("address of a = %x\n", &a); // address of a in hexadecimal


    int r;
    int *ptr4;
    ptr4 = &a;
    r = *ptr4;
    *ptr4 = 20;



    printf("r = %d\n", r);
    printf("a = %d\n", a);
    

    return 0;
}