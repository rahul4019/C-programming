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
  return 0;
}
