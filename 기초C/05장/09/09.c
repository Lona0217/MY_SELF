#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double stick, shadow, pyramids, height;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &stick);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &shadow);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &pyramids);

	height = (pyramids * stick) / shadow;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.\n", height);

	return 0;
}