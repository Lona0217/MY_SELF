#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f);
int main()
{
	double f;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f);

	printf("�ݿø��� ���� %d �Դϴ�.\n", round(f));

	return 0;
}

int round(double f)
{
	return (int)(f + 0.5);
}