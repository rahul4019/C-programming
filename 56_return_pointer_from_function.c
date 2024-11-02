#include <stdio.h>

int *return_pointer(int a[]) {
  a = a + 2; // move the pointer location by two so it will now point to 3
  return a;  // returning the address of the third item of the array
}

int main() {
  int a[] = {1, 2, 3, 4};
  int *p = return_pointer(a);
  printf("Value at the location retured pointer: %d\n", *p);
}
