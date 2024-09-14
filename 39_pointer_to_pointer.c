#include <stdio.h>

int main() {
  int a = 10;
  int *p = &a;
  int **q = &p; // Double pointer (q is storing address of pointer p)
  int ***r =
      &q; // pointer of level 3 which can store address of pointer of level 2

  // how to pring value of a using q
  printf("Value of a = %d\n", **q);

  // how to print value of a using r
  printf("Value of a = %d\n", ***r);

  **q = 25; // will store 25 in varaible a

  //  *q = 25; // will give an error
  printf("**q = %d\n", **q);

  // change value of a using pointer r
  ***r = 30;
  printf("value of a = %d\n", a);
  return 0;
}
