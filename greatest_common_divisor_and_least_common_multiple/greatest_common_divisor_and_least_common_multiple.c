#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 두 수의 최대 공약수 구하는 함수 - 유클리드 호제법 사용
int great_commom_divisor(int m, int n) {

	int temp;

	if (m < n) {
		temp = n;
		n = m;
		m = temp;
	}

	while (m % n != 0) {
		temp = n;
		n = m % n;
		m = temp;
	}

	return n;
}

// 두 수의 최소 공배수 구하는 함수 - 두 수의 곱 / 최대 공약수
int least_common_multiple(int m, int n) {
	
	return m * n / great_commom_divisor(m, n);
}

int main() {

	int a, b;

	printf("Please input two numbers : ");
	scanf("%d %d", &a, &b);
	printf("\n");

	printf("great commom divisor is %d\n", great_commom_divisor(a, b));
	printf("least common multiple is %d\n", least_common_multiple(a, b));

	return 0;
}