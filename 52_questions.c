#include "stdio.h"

/* int r() { */
/*   static int num = 7; */
/*   return num--; */
/* } */
/**/
/* int main() { */
/*   for (r(); r(); r()) { */
/*     printf("%d\n", r()); */
/*   } */
/*   return 0; */
/* } */

/* void f(int *p, int m) { */
/*   m = m + 5; */
/*   *p = *p + m; */
/*   return; */
/* } */
/**/
/* int main() { */
/*   int i = 5, j = 10; */
/**/
/*   f(&i, j); */
/*   printf("%d\n", i + j); */
/**/
/*   return 0; */
/* }; */

int jumble(int x, int y) {
  x = 2 * x + y;
  return x;
}

int main() {
  int x = 2, y = 5;
  y = jumble(y, x);
  x = jumble(y, x);
  printf("%d\n", x);
  return 0;
}
