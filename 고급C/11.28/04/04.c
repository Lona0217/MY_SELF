#include <stdio.h>

int get_sum(int array[], int size);

int main()
{
	int m[3][6] = { 0 };
	int result = 0;

	int row = sizeof(m) / sizeof(m[0]); // = 3
	int col = sizeof(m[0]) / sizeof(int); // = 6

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			m[i][j] = 10;
		}
	}

	for (int i = 0; i < row; i++)
	{
		result += get_sum(m[i], col);
	}
		
	printf("정수의 합 = %d\n", result);

	return 0;
}

int get_sum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}