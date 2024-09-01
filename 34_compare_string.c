#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[] = "rahul";
    // char str1[] = "RAHUL";
    char str2[] = "rahul";
    // char str2[] = "RAHUL";
    // char str1[] = "cat";
    // char str2[] = "car";

    // printf("%d", strcmp(str1, str2));

    // implement string comparison
    bool isEqual = true;

    int i = 0;

    while(str1[i] != '\0' || str2[i] != '\0') {

        if (str1[i] != str2[i]) {
            isEqual = false;
            break;
        }

        i++;
    }

    if (isEqual) {
        printf("%s\n", "Both the strings are equal.");
    }else{
        printf("%s\n", "String are not equal.");
    }

    return 0;
}