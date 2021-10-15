#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int binarysearch(int list[], int key);
void selectionsort(int list[]);
void random_(int list[]);

int main()
{
	srand((unsigned)time(NULL)); // = srand((int)time(NULL));

	int key, i;
	int list[SIZE] = { 0 };

	random_(list);
	selectionsort(list);
	printf("KEY: ");
	scanf("%d", &key);

	i = binarysearch(list, key);
	if (i < 0)
		printf("ERROR");
	else
		printf("Index: %d", i);
	return 0;
}

void random_(int list[])
{
	for (int i = 0; i < SIZE; i++)
		list[i] = rand() % 100;

	//랜덤 복수적용 해제
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i != j)
			{
				if (list[i] == list[j])
					list[j] = rand() % 100;
			}
		}
	}
}

void selectionsort(int list[])
{
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
		printf("%3d", list[i]);
	printf("\n");
}

int binarysearch(int list[], int key)
{
	int low, high, middle;

	low = 0;
	high = SIZE - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}

	return -1;
}