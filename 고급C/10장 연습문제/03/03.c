#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[]);

int main()
{
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

	array_equal(a, b);

	return 0;
}

int array_equal(int a[], int b[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] == b[i])
		{
			printf("2개의 배열은 같음\n");
			return 1;
		}

		else
		{
			printf("2개의 배열은 다름\n");
			return 0;
		}
	}
}