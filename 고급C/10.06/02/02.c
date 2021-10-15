#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{
	srand((unsigned)time(NULL));

	int freq[SIZE] = { 0 };
	
	for (int i = 0; i < 10000; i++)
		++freq[rand() % 6];

	printf("================\n");
	printf(" ¸é   ºóµµ\n");
	printf("================\n");

	for (int i = 0; i < SIZE; i++)
		printf("%3d   %3d \n", i + 1, freq[i]);

	return 0;
}