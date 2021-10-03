#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k, n;

	printf("");
	scanf("%d", &n);

	for (i = 0; i <n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}

		for (k = 0; k < i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}