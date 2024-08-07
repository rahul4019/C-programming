#include <stdio.h>

void main() {
    int a = 4, b = 6, result;
    // result = a > b && printf("rahul\n");
    // result = a > b && printf("rahul\n") || printf("lectures\n");
    result = a > b && printf("rahul\n") || printf("lectures\n") && printf("hello\n");
    printf("%d", result);

    printf("%d\n", 4 && !0);
    printf("%d\n", 4 && 0);

    return;
}