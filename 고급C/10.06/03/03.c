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

	printf("�ּҰ��� %d�Դϴ�.\n", minimum);
	printf("�ִ밪�� %d�Դϴ�.\n", maximum);

	return 0;
}