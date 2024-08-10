// Binary operators

#include <stdio.h>

void main() {
    int a = 10, b = 5;
    int c = a & b;
    // binary 10 = 1010
    // binary 5 = 0101 

    // bitwise AND &
    printf("%d\n", c); // 0

    // bitwise OR | 
    printf("%d\n", a | b); // 15

    // bitwise XOR ^
    printf("%d\n", a ^ b); // 15

    // bitwise left shift <<
    printf("%d\n", a << 2); // 40

    // bitwise right shift >>
    printf("%d\n", a >> 2); // 2

    // bitwise NOT ~
    printf("%d\n", ~10); // -11
}