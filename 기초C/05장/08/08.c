#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r, area, volum;
	const double PI = 3.141592;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);

	area = 4 * PI * r * r;
	volum = 4.0/3.0 * PI * r * r * r;

	printf("ǥ������ %lf�Դϴ�.\n", area);
	printf("ü���� %lf�Դϴ�.\n", volum);

	return 0;
}