#include <stdio.h>
#include <string.h>

int main() {
    char mystr[] = "Rahul Kumar";

    int len = 0, i = 0;

    while (mystr[i] != '\0') {
        len++; i++;
    }

    printf("Length of the string is:  %d\n", len);

    // using inbuilt method strlen of string.h

    printf("Length of string is: %d\n", strlen(mystr));


    return 0;
}