#include "stdio.h"

int sum(int a, int b) { return a + b; }

int main() {
  int a, b;
  printf("%s\n", "Enter two number:");
  scanf_s("%d%d", &a, &b);

  int result = sum(a, b);
  printf("%s%d\n", "sum = ", result);
  return 0;
}
