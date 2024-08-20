#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
 
    // int arr[ROW][COL] = {
    //                         {1, 2}, 
    //                         {3, 4}
    //                     };

    // // print the array left to right
    // for (int i = 0; i < ROW; i++) {

    //     for (int j = 0; j < COL; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
        
    //     printf("\n");
    // }

    // take input from user and fill it in the array
    int newArr[ROW][COL];

    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL; j++) {
            scanf("%d", &newArr[i][j]);
        }
    }

    // now print the newArr
    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL; j++) {
            printf("%d ", newArr[i][j]);
        }

        printf("\n");
    }

    return 0;
}