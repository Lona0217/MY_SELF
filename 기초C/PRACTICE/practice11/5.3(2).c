#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, w;
	double a;

	printf("체중과 키를 입력하세요: ");
	scanf("%d%d", &h, &w);

	a = (h - 100) * 0.9;

	if (w < a)
		printf("저체중입니다.\n");

	else if (w == a)
		printf("표준입니다.\n");

	else
		printf("과체중입니다.\n");

	return 0;
}