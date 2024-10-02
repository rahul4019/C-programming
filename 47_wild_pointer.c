#include <stdio.h>

int main() {
  int *ptr; // this is an unassigned pointer so it will act as a wild pointer

  printf("%d\n", *ptr); // print some garbage value

  ptr = NULL; // it is no more a wild pointer
  return 0;
}
