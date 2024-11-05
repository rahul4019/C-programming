#include <stdio.h>


struct Student {
  char name[20]; 
  int rollno;
  float marks;  
};

int main () {

  struct Student s[2]; // array of structure 

  for (int i = 0; i < 2; i++) {
    printf("Enter name of the student: \n");
    scanf("%s", s[i].name);

    printf("Enter rollno of the student: \n");
    scanf("%d", &s[i].rollno);

    printf("Enter marks of the student: \n");
    scanf("%f", &s[i].marks);
  }


  for (int i = 0; i < 2; i++) {
    printf("student's name: %s\n", s[i].name);
    printf("student's rollno: %d\n", s[i].rollno);
    printf("student's marks: %f\n", s[i].marks);
  }
  
  return 0;
}
