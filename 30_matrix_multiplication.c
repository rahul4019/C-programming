#include <stdio.h>

#define ROW1 3
#define COL1 3

#define ROW2 3
#define COL2 2

int main() {
  int A[ROW1][COL1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[ROW2][COL2] = {{1, 2}, {3, 4}, {5, 6}};

  // For matrix multiplication no. of cols. of matrix1 == no. of rows of matrix
  // 2 size of resultant matrix = rows of matrix1 * cols of matrix2 (3 * 2)

  int C[ROW1][COL2];

  for (int i = 0; i < ROW1; i++) {

    for (int j = 0; j < COL2; j++) {

      int sum = 0;
      for (int k = 0; k < ROW2; k++) {
        sum += A[i][k] * B[k][j];
      }
      C[i][j] = sum;
    }
  }

  // printing resultant matrix
  for (int i = 0; i < ROW1; i++) {

    for (int j = 0; j < COL2; j++) {
      printf("%d\t", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
