#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float meter;
	double mile;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);

	meter = 1609.0 * (float)mile;

	printf("%06.1lf������ %f�����Դϴ�.\n", mile, meter);

	return 0;
}