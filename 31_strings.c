#include <stdio.h>

int main () {

    char s1[50] = "H. No. 126, Gurgaon";
    char s2[] = "1234567890"; // automatically adds null character
    char s3[5] = "Hello";
    char s4[] = {'H','E','L', 'L','O','\0'};
    char s5[] = "rahul kumar";

    char mystr[10];

    printf("Enter the string:\n");

    // scanf("%s", mystr);  // if you press space it will stop taking input 
    gets(mystr); // treats the space as a character

    // printf("%s\n",mystr);    
    puts(mystr); // can print string and puts automatically adds \n character after printing the output

    printf("%s\n", &mystr[2]); // will print from the 2 (included) index of the string

    printf("%.5s\n", mystr); // will print only 5 character of the string

    printf("%10.5s\n",mystr); // will print 10 white spaces first then the 5 character of the string

    return 0;
}