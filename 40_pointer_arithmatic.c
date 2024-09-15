#include <stdio.h>

int main() {
  int a[5] = {0, 1, -1, 10, 11};
  int *p = &a[0];

  // printing array items using pointer aritmatic
  for (int i = 0; i < 5; i++, p++) {
    printf("%d\n", *p);
  }

  return 0;
}
