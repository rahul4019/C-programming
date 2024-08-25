#include <stdio.h>

# define ROW 2
# define COL 3

int main() {
    //  addition of two matrices only possible when both of them have equal no. of rows and columns
    int matrix1[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int result[ROW][COL];

    for ( int i = 0; i < ROW; i++) {

        for ( int j = 0; j < COL; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for ( int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}