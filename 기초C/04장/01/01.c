#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &x);

	printf("�Ǽ��������δ� %f�Դϴ�.\n", x);
	printf("�����������δ� %e�Դϴ�.\n", x);

	return 0;
}