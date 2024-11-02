#include <stdio.h>

int sum(int a, int b) { return a + b; }
int (*ptr)(int, int) = &sum; // assigning a function to a function pointer

int main() {
  int sum = (*ptr)(4, 2);
  printf("sum = %d\n", sum);
  return 0;
}
