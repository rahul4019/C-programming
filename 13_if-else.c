// if else

#include <stdio.h>

int main(){
    int a;

    printf("Enter value of a: ");
    scanf("%d", &a);

     
    if (a > 18){
        printf("Inside if condition\n");
        printf("Value of a: %d\n", a);
    }else {
        printf("Inside else condition\n");
        printf("Value of a: %d\n", a);
    }

    printf("Outside the if condition\n");

    return 0;
}