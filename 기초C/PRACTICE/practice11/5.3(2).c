#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, w;
	double a;

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%d%d", &h, &w);

	a = (h - 100) * 0.9;

	if (w < a)
		printf("��ü���Դϴ�.\n");

	else if (w == a)
		printf("ǥ���Դϴ�.\n");

	else
		printf("��ü���Դϴ�.\n");

	return 0;
}