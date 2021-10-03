#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int virus = 10, min = 0;

	while (virus <= 1000000)
	{
		virus *= 3;
		min += 20;
	}

	printf("\n총 %d마리입니다.\n", virus);
	printf("\nvirus가 백만마리가 되는 시간은 %d시간 %d분입니다.\n", min / 60, min % 60);

	return 0;
}