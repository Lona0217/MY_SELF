#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r, area, volum;
	const double PI = 3.141592;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	area = 4 * PI * r * r;
	volum = 4.0/3.0 * PI * r * r * r;

	printf("표면적은 %lf입니다.\n", area);
	printf("체적은 %lf입니다.\n", volum);

	return 0;
}