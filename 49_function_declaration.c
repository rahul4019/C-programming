#include <stdio.h>

int sum(int, int); // function declaration
// sum(int a, int b); // it will give warning at compile time beacuse there is
// no return type

int main() {
  int a, b;
  printf("%s\n", "Enter two numbers:");
  scanf_s("%d%d", &a, &b);

  int result = sum(a, b);

  printf("%s%d\n", "Sum = ", result);
}

int sum(int a, int b) { return a + b; } // function definition
