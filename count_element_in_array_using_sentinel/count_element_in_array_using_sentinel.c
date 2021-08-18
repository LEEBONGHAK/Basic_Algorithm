#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int sentinel_array[6] = { 40,13,89,52,7,-1 };
	int count = 0;

	while (sentinel_array[count] != -1) {
		count++;
	}

	printf("Number of sentinel array : %d\n", count);

	return 0;
}