#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int i;
	int scores[SIZE];
	printf("5���� ������ �Է��Ͻÿ�\n");

	for (i = 0; i < SIZE; i++)
		scanf("%d", &scores[i]);

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}