#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("2의 보수: %d\n", ~x + 1);

	return 0;
}