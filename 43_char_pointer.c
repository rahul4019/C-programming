#include <stdio.h>

int main() {
  char str[] = "This is Rahul.";
  char *ptr = str;

  printf("%c\n", *ptr);                     // output => T
  printf("%c\n", *(ptr++ + 1));             // output => h
  printf("%c\n", *((ptr-- + 5) - 1) + 3);   // output => 'i' + 3 = l
  printf("%c\n", *(++ptr + 10) - 32);       // output => 'l' - 32 = U
  printf("%c%c%c\n", *ptr, *++ptr, *--ptr); // output => hht
  return 0;
}
