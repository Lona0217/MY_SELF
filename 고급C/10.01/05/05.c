#include <stdio.h>
#define ROW 3
#define COL 6

int get_sum(int array[], int size);

int main()
{
	int array[ROW][COL] = { 0 };
	int sum[3] = { 0 };
	int result = 0;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			array[i][j] = 10;
		}
	}

	for (int i = 0; i < ROW; i++)
	{

		sum[i] = get_sum(array[i], COL);
	}

	result = get_sum(sum, ROW);

	printf("정수의 합 = %d\n", result);
	
	return 0;
}

int get_sum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(array + i);
	}

	return sum;
}