#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double c, f;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);

	printf("�������� %lf���Դϴ�.\n", c);

	return 0;
}