#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	int price[SIZE] = { 0 };
	int i, minimum, maximum;

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++)
	{
		price[i] = (rand() % 100) + 1;
	}

	minimum = price[0];
	maximum = price[0];

	for (i = 1; i < SIZE; i++)
	{
		if (price[i] < minimum)
			minimum = price[i];

		if (price[i] > maximum)
			maximum = price[i];
	}

	printf("최소값은 %d입니다.\n", minimum);
	printf("최대값은 %d입니다.\n", maximum);

	return 0;
}