#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a num:\n");
    scanf("%d", &num);
    printf("entered num: %d\n", num);

    for( int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}