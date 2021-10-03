#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight, height, result;

	printf("키와 체중을 입력하세요: ");
	scanf("%lf %lf", &height, &weight);

	result = (height - 100) * 0.9;

	if (weight < result)
	{
		printf("저체중입니다.\n");
	}
	else if (weight == result)
	{
		printf("표준입니다.\n");
	}
	else
	{
		printf("과체중입니다.\n");
	}

	return 0;
}