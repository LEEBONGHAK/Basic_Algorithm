#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int sum_consecutive_num(int num) {
	int sum = 0;
	int value = 1;

	while (value <= num) {
		sum += value;
		value++;
	}

	return sum;
}

int sum_of_gaussian(int num) {
	return (1 + num) * num / 2;
}

int main() {
	int take;

	printf("Please, input int : ");
	scanf("%d", &take);
	printf("\n");

	printf("result is %d\n", sum_consecutive_num(take));
	printf("result is %d\n", sum_of_gaussian(take));


	return 0;
}