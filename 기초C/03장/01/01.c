#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	double sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &y);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("\n���� %lf�̰� ����� %lf�Դϴ�.\n", sum, avg);

	return 0;
}