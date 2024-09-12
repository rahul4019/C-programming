#include <stdio.h>

int main () {
    /*int a = 10, b = 11;*/
    /*int *p, *q;*/
    /**/
    /*p = &a;*/
    /*q = p; // q is having the address of a*/
    /**/
    /*printf("q = %d\n", *q);*/
    /**/
  
    int a = 10, b = 11;
    int *p, *q;

    p = &a;
    q = &b;

    *q = *p;
    
    printf("a = %d *p = %d *q = %d\n", a, *p, *q);
    return 0;
}
