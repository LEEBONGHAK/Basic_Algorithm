#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 100

bool check[MAX + 1];

// 에라토스테네스의 체를 사용하여 1 ~ MAX까지의 수 중 소수 구하기
void find_prime_number()
{
	check[1] = true;

	for (int i = 2; i <= (int)floor(sqrt(MAX)); i++)
	{
		if (check[i]) continue;

		for (int j = 2; i * j <= MAX; j++)
			check[i * j] = true;
	}
}

int main() 
{
	find_prime_number();

	printf("Prime Number\n");
	for (int i = 1; i <= MAX; i++)
		if (!check[i]) printf("%d\n", i);

	return 0;
}