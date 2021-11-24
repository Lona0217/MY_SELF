#include <stdio.h>

int main()
{
	int x[3][5] = { {12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21} };

	for (int i = 0; i < 3; i++)
	{
		int add=0;
		for (int j = 0; j < 5; j++)
		{
			add += x[i][j];
		}
		printf("%d행의 합계 : %d\n", i, add);

	}

	for (int i = 0; i < 5; i++)
	{
		int add = 0;
		for (int j = 0; j < 3; j++)
		{
			add += x[j][i];
		}
		printf("%d행의 합계 : %d\n", i, add);

	}
}