#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z, v;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &x ,& y, & z);

	v = x * y * z;

	printf("������ ���Ǵ� %lf�Դϴ�.\n", v);

	return 0;
}