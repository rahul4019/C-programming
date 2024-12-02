#include <stdio.h>
// using typedef we can create our own name

typedef int integer; // created a new alias of int data type

typedef struct Student {
  char name[20];
  int rollno;
  float marks;
} stu; // here stue is not a variable (which is when you don't use typedef
       // keyword)

int main() {
  integer num = 9;
  printf("num: %d\n", num);

  stu s1 = {"rahul", 21,
            92}; // using alias to create instance of student structure

  printf("s1.name = %s\ns1.rollno = %d\ns1.marks = %f\n", s1.name, s1.rollno,
         s1.marks);

  return 0;
}
