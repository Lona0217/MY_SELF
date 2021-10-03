#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, area;

	printf("»ï°¢ÇüÀÇ ¹Øºµ: ");
	scanf("%lf", &x);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &y);

	area = 0.5 * x * y;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf\n", area);

	return 0;
}