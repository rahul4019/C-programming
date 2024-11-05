#include <stdio.h>

struct Student {
  char name[20];
  int rollno;
  float marks;
};

struct Student s = {"rahul", 23, 29};

int main() {

  struct Student *ptr =
      &s; // pointer which will point the variable of type student structurename

  printf("ptr->name = %s\n", ptr->name);
  printf("%s\n", (*ptr).name);

  return 0;
}
