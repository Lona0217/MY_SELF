#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	if (even(n))
		printf("even()의 결과: 짝수\n");
	else
		printf("even()의 결과: 홀수\n");

	printf("absolute()의 결과: %d\n", absolute(n));

	if (sign(n) == 1)
		printf("sign()의 결과: 양수\n");
	else if (sign(n) == 0)
		printf("sign()의 결과: 0\n");
	else
		printf("sign()의 결과: 음수\n");

	return 0;
}

int even(int n)
{
	if (n % 2)
		return 0;
	else
		return 1;
}

int absolute(int n)
{
	if (n < 0)
		return n * (-1);
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}