#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getMax(int x, int y);

int main()
{
	int x, y;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("\n큰수는 %d입니다.\n", getMax(x, y));

	return 0;
}

int getMax(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);

	return 0;
}
