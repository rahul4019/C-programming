#include <stdio.h>

int main() {
  int a[] = {3, 2, 67, 0, 56};
  int *p = a;

  /*int i = 0;*/
  /*while (i < 5) {*/
  /*  printf("a[%d] = %d\n", i, *p);*/
  /**/
  /*  i++;*/
  /*  p++;*/
  /*}*/
  /**/
  /*int j = 4;*/
  /*int *q = &a[4];*/
  /*while (j >= 0) {*/
  /*  printf("a[%d] = %d\n", j, *q);*/
  /**/
  /*  j--;*/
  /*  q--;*/
  /*}*/

  /*printf("value of *pp = %d\n", *p++);*/
  /**/
  /*for (int i = 0; i < 5; i++) {*/
  /*  printf("a[%d] = %d\n", i, *p++);*/
  /*}*/

  printf("%d %d\n", *(p++), *p++);
  printf("%d\n", *p);

  return 0;
}
