// Control statements 

#include <stdio.h>

int main() {
    int a;

    printf("Enter value of a: ");
    scanf("%d", &a);

    // if(a) {
    //     printf("Inside if condition\n");
    //     printf("Value of a: %d\n", a);
    // }

    if (a); // if condition terminates here below lines will be executed
    {
        printf("Inside if condition\n");
        printf("Value of a: %d\n", a);
    }

    printf("Outside the if condition\n");

    return 0;
}