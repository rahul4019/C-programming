#include <stdio.h>

void main() {
    int a;
    a = (printf("Rahul\n"), 2); // Rahul will be printed then 2 will be assigned to a
    printf("%d\n", a);

    a = (printf("Rahul\n"), 2, 3, 4); // Rahul will be printed then 4 will be assigned to a
    printf("%d\n", a);


    int c = 8, d;

    // d = (c++, ++c); // 10
    // printf("%d\n", d);

    d = c++, ++c; //8
    printf("%d\n", d);
    return;
}