#include <stdio.h>
#define ROW 3
#define COL 6

double get_average(int list[], int n);

int main()
{
	int s[ROW][COL] = { 0 };
	double avg;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			s[i][j] = (i + j + 1) * 10;
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		avg = get_average(s[i], COL);
		printf("%dÇàÀÇ Æò±Õ°ª = %lf\n", i, avg);
	}
}

double get_average(int list[], int n)
{
	int sum = 0;
	double avg;

	for (int i = 0; i < n; i++)
	{
		sum += *(list + i);
	}

	avg = (double)sum / (double)n;

	return avg;
}