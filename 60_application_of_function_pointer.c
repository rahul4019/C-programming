#include <stdio.h>

int sum(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int prod(int a, int b) { return a * b; }

int div(int a, int b) { return a / b; }

int main() {
  int a, b, op;
  int (*func_ptr[4])(int, int) = {sum, sub, prod, div};

  printf("Enter first num: ");
  scanf("%d", &a);

  printf("Choose operator: \n");
  printf("1 for + \n");
  printf("2 for - \n");
  printf("3 for * \n");
  printf("4 for / \n");
  scanf("%d", &op);

  printf("Enter second num: \n");
  scanf("%d", &b);

  op--; // subtracting one to match the array index

  // calling the function using function pointer
  int val = (*func_ptr[op])(a, b);
  printf("Output: %d\n", val);
  return 0;
}
