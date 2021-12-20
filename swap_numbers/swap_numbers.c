#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 데이터 교환
void swap(int* n, int* m) {
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {

	int a = 1, b = 2;

	printf("before swap, a and b are %d %d\n\n", a, b);

	swap(&a, &b);
	printf("After swap, a and b are %d %d\n", a, b);

}