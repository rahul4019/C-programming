// Special operators

#include <stdio.h>

void main() {
    // Comma operator
    int a, b, c; // here , is acting as separator not operator

    a = 5, 4; // = has more precedence over , so a will be assigned the value of 5
    printf("%d\n", a);

    a = (5, 4); // () has more precedence than = so first () will be evaluated and it will return 4 which will be assigned to a
    printf("%d\n", a);

    // int a = 5, 4; // ERROR at the time of declaration it will act as operator so the expressin will be evaluated like int a = 5, int 4;
    return;
}