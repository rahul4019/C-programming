#include <stdio.h>

int main() {
    int a, i;
    int sum = 0;

    for (i = 0; i < 5; i++) {

        printf("Enter number: \n");
        scanf("%d", &a);

        if (a < 0) continue;
        
        sum += a;
    }
    printf("Sum = %d", sum);
    return 0;
}