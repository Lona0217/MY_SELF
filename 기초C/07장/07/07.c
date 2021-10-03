#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int x = 5; x > 0; x--)
	{
		for (int y = x; y>0; y--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	for (int x = 0; x <5; x++)
	{
		for (int y = 0; y <5-x; y++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	for (int x = 5; x > 0; x--)
	{
		for (int y = 0; y <x; y++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}