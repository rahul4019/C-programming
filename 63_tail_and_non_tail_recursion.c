#include "stdio.h"

void tail_recursion(int num) {
  // base case
  if (num <= 0) {
    return;
  } else {
    printf("%d\n", num);
    tail_recursion(num -
                   1); // recursive call is the last operation in the function
  }
}

void non_tail_recursion(int num) {
  // base case
  if (num <= 0) {
    return;
  } else {
    printf("%d\n", num);
    non_tail_recursion(
        num - 1); // recursive call is not the last operation in the function
    float div = (float)num / 2;
    printf("%f\n", div);
  }
}

int main() {

  /* tail_recursion(5); */
  non_tail_recursion(5);
  return 0;
}
