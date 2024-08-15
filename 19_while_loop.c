#include <stdio.h>

int main() {
    int i;

    // Not an infinite loop 
    // value of i will become 0 after reaching the limit of signed integer

    // while (i ) {
    //     printf("%d\n", i);
    //     ++i;
    // }

    // i = 0;
    // while (i++) {
    //     printf("%d\n",i);
    // }

    // Again this is also not an infinite loop
    char ch = 'a';
    while(ch) {
        printf("%d\n",ch);
        ch++;
    }

    printf("End of the program!\n");
    return 0;
}