#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	double sum, avg;

	printf("실수를 입력하시오: ");
	scanf("%d", &x);
	printf("실수를 입력하시오: ");
	scanf("%d", &y);
	printf("실수를 입력하시오: ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("\n합은 %lf이고 평균은 %lf입니다.\n", sum, avg);

	return 0;
}