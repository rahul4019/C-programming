// Else-if ladder  
#include <stdio.h>

int main(){
    int num;

    // Ask the user for an integer input
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0){
        printf("The number is negative.\n");
    }
    else if (num == 0){
        printf("The number is zero.\n");
    }
    else if (num > 0 && num <= 10){
        printf("The number is between 1 and 10.\n");
    }
    else if (num > 10 && num <= 50){
        printf("The number is between 11 and 50.\n");
    }
    else if (num > 50 && num <= 100){
        printf("The number is between 51 and 100.\n");
    }
    else{
        printf("The number is greater than 100.\n");
    }

    return 0;
}
