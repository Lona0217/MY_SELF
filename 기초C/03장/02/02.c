#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float meter;
	double mile;

	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);

	meter = 1609.0 * (float)mile;

	printf("%06.1lf마일은 %f미터입니다.\n", mile, meter);

	return 0;
}