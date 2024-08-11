// Unformatted output function

#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    printf("Enter a character: \n");
    // ch = getchar();

    // putchar(ch); // display single character

    ch = getch();
    putch(ch); // display single character, defined in the conio.h header file

    char str[20];
    gets(str);
    puts(str); // display string 

    return 0;
}