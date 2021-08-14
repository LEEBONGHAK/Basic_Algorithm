#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
	Fibonacci sequence

	1, 1, 2, 3, 5, 8, 13, 21, 34
	ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
	ex) fibonacci(6) = 5 + 3 = fibonacci(5) + fibonacci(4)
*/

int fibonacci(int number) {

	if (number > 2) {
		return fibonacci(number - 1) + fibonacci(number - 2);	// double recursion
	}
	else {
		return 1;
	}
}

int main() {

	int count;

	printf("Please input number : ");
	scanf("%d", &count);
	printf("\n");

	for (int i = 1; i < count; ++i) {
		printf("%d ", fibonacci(i));
	}
	printf("\n");

	return 0;
}


