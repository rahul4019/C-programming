#include <stdio.h>

float avg(int marks[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += marks[i];
  }

  return (float)sum / n; // cast the value to float for precission
}

int main() {
  int marks[4] = {22, 82, 83, 30};
  int size = sizeof(marks) / sizeof(marks[0]);

  float average = avg(marks, size); // address of first element of array is
                                    // getting passed (call by reference)

  printf("Average marks = %f\n", average);

  return 0;
}
