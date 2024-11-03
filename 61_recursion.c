#include "stdio.h"

int factorial(int num) {
  /* base case  */
  if (num == 0 || num == 1) {
    return 1;
  }

  int result = num * factorial(num - 1);

  return result;
}

int sum_of_n_natural_numbers(int num) {
  // base case
  if (num == 0 || num == 1) {
    return num;
  }

  int sum = num;

  sum += sum_of_n_natural_numbers(num - 1);

  return sum;
}

int main() {
  int num;

  printf("Enter num: ");
  scanf("%d", &num);

  /* int val = factorial(num); */
  int val = sum_of_n_natural_numbers(num);
  printf("%d\n", val);
  return 0;
}
