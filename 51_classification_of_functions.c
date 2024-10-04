#include <stdio.h>
#include <time.h>

// no argument without return type
void greeting(void) { printf("Hello world!\n"); }

// no argument with return type function
char *get_time() {
  // time_t is data type
  time_t current_time;
  time(&current_time);

  char *time_string = ctime(&current_time);
  return time_string;
}

// with argument no return type
void sum(int a, int b) { printf("sum = %d\n", a + b); }

// with argument with return type
int multiplication(int a, int b) { return a * b; }

int main() {
  greeting();

  char *time = get_time();
  printf("%s\n", time);

  sum(2, 4);

  int product = multiplication(5, 10);
  printf("product = %d\n", product);
  return 0;
}
