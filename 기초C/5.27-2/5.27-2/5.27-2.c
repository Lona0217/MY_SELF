#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMax(double x, double y);

int main()
{
	double x, y, max;
	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	max = getMax(x, y);
	printf("\nū���� %lf�Դϴ�.\n", max);

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