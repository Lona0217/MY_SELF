#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double c, f;

	printf("화씨값을 입력하시오: ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);

	printf("섭씨값은 %lf도입니다.\n", c);

	return 0;
}