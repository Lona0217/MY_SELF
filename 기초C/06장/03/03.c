#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf(" %d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (y > z)
			printf("���� ���� ������ %d�Դϴ�.\n", z);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", y);
	}

	else if (y > z)
	{
		if (z < x)
			printf("���� ���� ������ %d�Դϴ�.\n", z);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", x);
	}

	else
	{
		if (x > y)
			printf("���� ���� ������ %d�Դϴ�.\n", y);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", x);
	}

	return 0;
}