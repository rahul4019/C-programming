#include <stdio.h>

int main() {
  int *ptr; // pointing to some unknown location

  printf("%d\n", *ptr); // prints some garbage value

  int *ptr1 = NULL; // this NULL has value 0
  int *ptr2 = 0;    // same as above (but this 0 is not similar to intiger 0)

  /* printf("%d\n", *ptr1); // this is wrong, you can't dereference it because
   * it */
  // is reserverd. You will get "Segmentation fault"
  printf("%p\n", ptr1);

  if (ptr1 == ptr2) {
    printf("%s\n", "these pointers are same");
  }

  return 0;
}
