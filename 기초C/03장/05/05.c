#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x,value;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &x);

	value = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %lf\n", value);

	return 0;
}