#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number, x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	for (x = 1; x <= number;x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}

	return 0;
}