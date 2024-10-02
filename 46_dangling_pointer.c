#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr = (int *)malloc(
      sizeof(int)); // malloc is allocating memory in heap. Return type of
                    // malloc is void so we are typecasting it to intiger
  *ptr = 10;

  printf("%d\n", *ptr);

  free(ptr); // it wil release the memory it has blocked and it will point to
             // some invalid/freeed memory address. (it is called "dangling
             // pointer")

  /* if you try to defreference it after releasing it, will show some garbage
   * value or some undefined behaviour */
  printf("%d\n", *ptr);

  /* to get rid of this dangling pointer we can point it to NULL */
  ptr = NULL;

  return 0;
}
