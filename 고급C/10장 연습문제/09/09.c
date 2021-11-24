/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_(int student[]);

int main()
{
	srand((unsigned)time(NULL));

	int student[10][4] = { 0 };

	random_(student);

}

void random_(int student[])
{
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 4; j++)
		{
			student[i][j] = rand() % 100;
			printf("%5d\t", student[][j]);
		}
		printf("%5d\t", student[i]);
	}
}*/

// 난수 생성조차 못함...