#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("3개의 정수를 입력하시오: ");
	scanf(" %d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (y > z)
			printf("제일 작은 정수는 %d입니다.\n", z);
		else
			printf("제일 작은 정수는 %d입니다.\n", y);
	}

	else if (y > z)
	{
		if (z < x)
			printf("제일 작은 정수는 %d입니다.\n", z);
		else
			printf("제일 작은 정수는 %d입니다.\n", x);
	}

	else
	{
		if (x > y)
			printf("제일 작은 정수는 %d입니다.\n", y);
		else
			printf("제일 작은 정수는 %d입니다.\n", x);
	}

	return 0;
}