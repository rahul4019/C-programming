#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "RAHUL";
    
    int i = 0;

    while (str[i] != '\0') {
        if ( (int)str[i] >= 65 && (int)str[i] <= 90) {
            str[i] = (int)str[i] + 32;
        }
        i++;
    }

    printf("Converted lowercase string: %s\n", str);
    return 0;
}