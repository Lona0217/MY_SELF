#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum;

	printf("짝수 또는 홀수를 입력하시오: ");
	scanf("%d", &n);

	if (n % 2 == 1)
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &n);

		i = 1;
		sum = 0;

		while (i <= n)
		{
			sum += i;
			i = i + 2;
		}

		printf("1부터 %d까지의 홀수합은 %d입니다\n", n, sum);

	}

	else
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &n);

		i = 0;
		sum = 0;

		while (i <= n)
		{
			sum += i;
			i = i + 2;
		}

		printf("1부터 %d까지의 짝수합은 %d입니다\n", n, sum);
	}

	return 0;
}