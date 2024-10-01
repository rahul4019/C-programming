// void pointer => a pointer without data type
#include <stdio.h>

int main() {
  int *ip;   // ip is a pointer that is pointing to the int data type (data type
             // of ip is not int)
  float *fp; // fp
  char *cp;  // ip

  void *vp; // void pointer, it can be typecasted (can be converted to another
            // datatype)
  // void pointer can store address of any datatype

  int a = 10;
  float b = 2.21;
  char c = 'c';

  // vp = &a;
  // vp = &b;
  vp = &c;

  // printf("%d\n", *(int *)vp);
  // printf("%f\n", *(float *)vp);
  printf("%c\n", *(char *)vp);
}
