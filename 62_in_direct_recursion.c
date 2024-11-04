#include <stdio.h>

int fun1(int n);
int fun2(int n);

int fun1(int n) {

  if (n <= 1) {
    return 1;
  }

  return n * fun2(n - 1);
}

int fun2(int n) {

  if (n <= 1) {
    return 1;
  }

  return n * fun1(n - 1);
}

int main() {
  printf("%d\n", fun1(5));
  return 0;
}
