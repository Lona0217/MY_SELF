#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f);
int main()
{
	double f;

	printf("실수를 입력하시오: ");
	scanf("%lf", &f);

	printf("반올림한 값은 %d 입니다.\n", round(f));

	return 0;
}

int round(double f)
{
	return (int)(f + 0.5);
}