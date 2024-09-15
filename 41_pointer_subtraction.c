#include <stdio.h>

int main () {
  int a[] = {0, 1, -1, 10, 11};
  int *p = &a[0];
  int *q = &a[4];

  int d = p - q;
  printf("value of d = %d\n", d);

  *q = 25;
  printf("value of a[4] = %d\n", a[4]);

  d = q - p;
  printf("value of q - p = %d\n", d);

  return 0;
}
