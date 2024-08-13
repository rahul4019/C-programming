#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter num1: \n");
    scanf("%d", &num1);

    // Clear the newline character left in the buffer
    while (getchar() != '\n'); 

    printf("Enter operator: \n");
    // Use a space before %c to skip any whitespace characters
    scanf("%c", &operator);

    printf("Enter num2: \n");
    scanf("%d", &num2);

    switch (operator) {
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        default:
            printf("Operator must be among +, -, *, /\n");
    }

    return 0;
}
