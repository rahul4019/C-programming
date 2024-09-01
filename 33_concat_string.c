#include <stdio.h>
#include <string.h>

int main () {
    char s1[30] = "rahul";
    char s2[] = "kumar";

    // strcat(s1, s2);
    // strncat(s1, s2, 3) // Concats only 3 characters
    // puts(s1);

    // concat two string without using inbuilt functions
    // int i = 0;
    // while ( s1[i] != '\0') {
    //     printf("%c", s1[i]);
    //     i++;
    // }
    
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for (int i = 0; i <= l2; i++) {
        s1[l1+i]  = s2[i];
    }

    puts(s1);

    printf("%c", s2[7]);
    return 0;
}