#include <stdio.h>

int sum1(int a, int b) {
  a = 10, b = 20; // updating these values won't affect in the a and b variable
                  // in function main
  return a + b;
}

int sum2(int *ptr1, int *ptr2) {
  *ptr1 = 100, *ptr2 = 19; // updating these values will update a and b
                           // variable in function main

  return *ptr1 + *ptr2;
}

int main() {
  int a = 5, b = 10;

  int result1 = sum1(a, b); // call by value
  // in call by value arguments gets copied

  printf("%s%d\n", "sum1 = ", result1);

  int result2 = sum2(&a, &b); // call by reference
  // in call by reference the address of the variable gets passed.

  printf("a = %d, b = %d\n", a, b); // at this point value of a = 100 and b = 19

  printf("%s%d\n", "sum2 = ", result2);
  return 0;
}
