// callback function is an application of FUNCTION POINTER
#include "stdio.h"

void sum(int a, int b) { printf("%d\n", a + b); }

void sub(int a, int b) { printf("%d\n", a - b); }

// callback function
void display(void (*func_ptr)(int, int), int a, int b) { (*func_ptr)(a, b); }

int main() {
  display(sum, 49, 29);
  display(sub, 20, 30);
}
