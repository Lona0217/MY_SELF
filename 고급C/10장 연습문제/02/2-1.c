#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void random_(int list[]);
void maximum(int list[]);
void minimum(int list[]);

int main()
{
	srand((unsigned)time(NULL));

	int list[SIZE] = { 0 };

	random_(list);
	printf("\n\n");
	maximum(list);
	minimum(list);
}

void random_(int list[])
{
	for (int i = 0; i < SIZE; i++)
	{
		list[i] = rand();
		printf("%7d", list[i]);
	}


	//랜덤 복수적용 해제
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i != j)
			{
				if (list[i] == list[j])
					list[j] = rand();
			}
		}
	}
}

void maximum(int list[])
{
	int max = list[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (list[i] > max)
			max = list[i];
	}

	printf("최대값은 %d\n\n", max);

}

void minimum(int list[])
{
	int min = list[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (list[i] < min)
			min = list[i];
	}

	printf("최소값은 %d\n", min);

}