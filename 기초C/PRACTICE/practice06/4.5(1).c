#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, sum;
	printf("첫 번째 정수를 입력: ");
	scanf("%d", &x);
	printf("두 번째 정수를 입력: ");
	scanf("%d", &y);
	sum = x + y;
	printf("두 수의 합은: %d\n", sum);

	return 0;
}