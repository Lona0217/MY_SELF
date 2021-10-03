#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, choose;

	printf("선택하시오(1: 가위 2: 바위 3: 보) ");
	scanf("%d", &num);

	choose = (rand() % 3 + 1);

	if (num == 1)
	{
		if (choose == 1)
			printf("무승부\n");
		else if (choose == 2)
			printf("프로그램 승\n");
		else
			printf("사용자 승\n");
	}

	else if (num == 2)
	{
		if (choose == 1)
			printf("사용자 승\n");
		else if (choose == 2)
			printf("무승부\n");
		else
			printf("프로그램 승\n");
	}

	else
	{
		if (choose == 1)
			printf("프로그램 승\n");
		else if (choose == 2)
			printf("사용자 승\n");
		else
			printf("무승부\n");
	}


	return 0;
}