#include <stdio.h>

struct Student {
  int roll_no;
  char name[20];
  float marks;
} s3 = {3, "unknown",
        79}; // declaration and initialization of Student type variable

struct {
  int roll_no;
  char name[20];
  float marks;
} s4 = {3, "unknown", 79}; // struct without name (this is also correct)

int main() {
  struct Student s1 = {21, "rahul", 35.5}; // compile time initialization
  struct Student s2 = {1};                 // partial initialization

  /* note: in compile time initialization values must be in the order defined in
   * the struct */

  /* to access the properties of an instance of a struct we use dot(.) notation
   */

  printf("%d\n", s1.roll_no);
  printf("%s\n", s3.name);

  s2 = s1; // copy

  printf("%s\n", s2.name);

  // run time initialization
  struct Student s5;
  scanf("%d", &s5.roll_no);
  scanf("%s", s5.name);
  scanf("%f", &s5.marks);
  printf("%s\n", s5.name);
  return 0;
}
