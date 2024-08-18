#include <stdio.h>

int main() {
    // int b;
    // int arr[b=5/2];  // this is also correct
     
    // compile time initialization
    // int a[5] = { 0, 1, 2, 3, 4};
    // int a[] = { 2, 3, 4}; 
    // int a[5] = { 1, 2, 3 }; // remaining two indices will be initialized with garbage
    // int a[2] = {1, 6, 9, 4}; // this will give ERROR because size of array is 2 and num of elements are 4

    int arr[5];

    printf("Size of arr is: %d\n", sizeof(arr));

    printf("Enter 5 numbers: \n");

    for( int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); // run time initialization
    }

    for (int i = 0; i < 5; i++) {
        printf("Element at index %d is %d\n", i, arr[i]);
    }

    return 0;
}
