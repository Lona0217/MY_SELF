#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num);

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("\n1부터 %d까지의 합 = %d\n", num, sum(num));
}

int sum(int num)
{
	if (num < 1)
		return 0;
	/* 
	if (num <= 1)
		return 1;
	*/

	else
		return num + sum(num - 1);
}