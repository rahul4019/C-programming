#include <stdio.h>

void main () {
    int a = 18, b = 9, c, d, e = 10;

    c = b++;
    d = b;

    printf("%d\n", a < b < c > d ); // 0
    printf("%d\n", b == e ); // 1
    printf("%d\n", c + 1 > e ); // 0
    printf("%d\n", a + c == b > e < c + d ); // 0
    printf("%d\n", a + c == b > e < c + d != 1 ); // 1

    return;
}