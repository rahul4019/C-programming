// we cannot return a string we only return a pointer that points to the first
// character of the string

#include <stdio.h>

const char *return_str() {
  /* return "Hello world!"; // this string get stored in Heap memory */
  // life of this string is throughout the program

  char str[] =
      "Hello world!"; // in this case this str is stored in stack memory
  /* return str; */

  static char str2[] =
      "string 2"; // now life of this string will be throughout the program
  /* return str2; */

  const char *str3 = "str3"; // in this case memory will be alocated from Heap
  return str3;
}

int main() {
  const char *str = return_str();
  /* str[0] = 'r'; // will give segmentation fault */
  printf("str: %s\n", str);
  return 0;
}
