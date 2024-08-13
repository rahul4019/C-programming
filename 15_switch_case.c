//  Switch case statment
#include <stdio.h>

int main() {
    char ch;
    printf("Enter character: \n");
    scanf("%c", &ch);

    switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Not a vowel\n");
    }

    return 0;
}