#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, a, b;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	a = x / y;
	b = x % y;

	printf("몫: %d 나머지: %d\n", a, b);

	return 0;
}