#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("��ǥ (x y): ");
	scanf("%d %d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1��и�\n");

		else
			printf("4��и�\n");

	else if (y > 0)
		printf("2��и�\n");

	else
		printf("3��и�\n");

	return 0;
}