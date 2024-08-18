// program to read an array of 10 integers and count no. of odd and even in it
#include <stdio.h>

int main () {
	int arr[10];
	int evenTotal = 0 , oddTotal = 0;

	printf("Enter 10 numbers:\n");

	for ( int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	for ( int i = 0; i < 10; i++) {
		if ( arr[i] % 2 == 0) {
			evenTotal += 1;
		}else{
			oddTotal += 1;
		}
	}

	printf("Even numbers in the array: %d\n", evenTotal);
	printf("Odd numbers in the array: %d\n", oddTotal);

	return 0;
}

