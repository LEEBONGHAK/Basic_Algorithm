#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 배열의 평균 구하기
int main() {

	int sentinel_array[6] = { 40,13,89,52,-1 };
	int count = 0, sum = 0;

	while (sentinel_array[count] != -1) {
		sum += sentinel_array[count];
		count++;
	}

	printf("Average of sentinel array : %f\n", (float)sum / count);

	return 0;
}