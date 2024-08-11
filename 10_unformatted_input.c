// Unformatted input function 

#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    // ch = getchar(); // reads single character 
    
    // printf("ch = %c\n",ch);

    // char ch1 = getch(); // reads single character defined in conio.h headerfile
    // doesn't wait for enter to be jumps to the next line
    // and character doesn't get echoed on the screen
    // used in sensetive cases like password

    // printf("ch1 = %c\n", ch1);

    // char ch2 = getche(); // reads single character
    // doesn't wait for enter to be jumps to the next line
    // and character gets echoed on the screen

    // printf("ch2 = %c\n", ch2);

    char str[20]; // character array of size 20
    gets(str);
    printf("Entered String: %s", str);

    return 0;
}