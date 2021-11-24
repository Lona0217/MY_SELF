#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void max(int score[]);
void min(int score[]);
void avg(int score[]);

int main()
{
	int score[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, 학생 점수(0~100)? ", i + 1);
		scanf("%d", &score[i]);

		if (score[i] > 100 || score[i] < 0)
			i--;
	}
	
	printf("\n");

	for (int i = 0;i < SIZE; i++)
	{
		printf("%d,\t", score[i]);
	}

	//printf("\n");

	avg(score);
	max(score);
	min(score);

	return 0;
}

void avg(int score[])
{
	int sum = 0;
	double avg;

	for (int i = 0; i < SIZE; i++)
	{
		sum += score[i];
	}

	avg = (double)sum / SIZE;

	printf("평균 점수 : %.2lf\n", avg);
}

void max(int score[]) 
{
	int max = score[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (score[i] > max)
			max = score[i];
	}

	printf("최고 점수 : %d, \t", max);
}

void min(int score[])
{
	int min = score[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (score[i]< min)
			min = score[i];
	}

	printf("최저 점수 : %d", min);
}