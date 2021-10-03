#include <stdio.h>

int get_integer()
{
	int value;

	printf("정수 입력: ");
	scanf("%d", &value);

	return value;
}