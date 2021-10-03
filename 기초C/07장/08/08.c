#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int x = 0; x <5; x++)
	{
		for (int y = 0; y <=x; y++)
		{
			printf("*");
		}
		for (int y = 4-x; y>0; y--)
		{
			printf(" ");
		}
		for (int y = 5; y >x; y--)
		{
			printf("*");
		}

		printf("\n");
	}

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y<4-x ; y++)
		{
			printf(" ");
		}
		for (int y = 0; y <=x; y++)
		{
			printf("*");
		}
		for (int y = 0; y < x; y++)
		{
			printf(" ");
		}
		for (int y = 5 - x; y > 0; y--)
		{
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}