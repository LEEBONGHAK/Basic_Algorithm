#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int sum_of_array(int arr[], int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {

	int arr[5] = { 40,13,89,52,7 };

	printf("array : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Sum of array is %d\n", sum_of_array(arr, 5));

	return 0;
}