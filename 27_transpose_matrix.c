#include <stdio.h>

#define ROW_1 5
#define COL_1 5
#define ROW_2 5
#define COL_2 5

int main() {

    // int matrix[ROW_1][COL_1] = {
    //                     {1, 2, 3}, 
    //                     {4, 5, 6}
    //                 };
    
    int matrix[ROW_1][COL_1] = {
                        {1, 2, 3, 9 , 12}, 
                        {4, 5, 6, 29 , 28},
                        {12, 16, 21, 103, 68},
                        {192, 923, 501, 291, 292},
                        {0, 69, 42, 91, 502}
                    };

    int transpose[ROW_2][COL_2];

    for (int i = 0 , k = 0; i < ROW_1; i++, k++) {

        for (int j = 0 , l = 0; j < COL_1; j++, l++) {
             transpose[l][k] = matrix[i][j];
        }

    }
     

    // for viwing result
    for (int i = 0; i < ROW_2; i++) {
        for (int j = 0; j < COL_2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}