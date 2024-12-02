#include <stdio.h>

struct Student {
  char name[20];
  int rollno;
  float marks;
};

struct Student s = {"rahul", 23, 29};

int main() {

  struct Student *ptr = &s; // pointer which will point the variable of type
                            // student structure name

  printf("Memory taken by struct student: %llu bytes\n.",
         sizeof(struct Student));

  printf("ptr->name = %s\n", ptr->name);
  printf("dot notation = %s\n", (*ptr).name);

  return 0;
}
