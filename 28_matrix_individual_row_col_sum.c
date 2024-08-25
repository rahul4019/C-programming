#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < ROW; i++) {

        int row_sum = 0, col_sum = 0;

        for (int j = 0; j < COL; j++) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }

        printf("row_sum = %d, col_sum = %d\n", row_sum, col_sum);
    }

    return 0;
}