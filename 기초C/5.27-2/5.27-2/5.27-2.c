#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMax(double x, double y);

int main()
{
	double x, y, max;
	printf("두 개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	max = getMax(x, y);
	printf("\n큰수는 %lf입니다.\n", max);

	return 0;
}

double getMax(double x, double y)
{
	if (x > y)
		return (x);
	else
		return (y);

	return 0;
}