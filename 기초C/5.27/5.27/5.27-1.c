#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getMax(int x, int y);

int main()
{
	int x, y, max;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	max = getMax(x, y);
	printf("\nū���� %d�Դϴ�.\n", max);

	return 0;
}

int getMax(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);

	return 0;
}
