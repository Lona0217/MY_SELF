#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, area;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &x);

	printf("�ﰢ���� ����: ");
	scanf("%lf", &y);

	area = 0.5 * x * y;

	printf("�ﰢ���� ����: %lf\n", area);

	return 0;
}