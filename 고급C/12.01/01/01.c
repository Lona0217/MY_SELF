#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;
	char* fruits[5];

	n = sizeof(fruits) / sizeof(fruits[0]);

	printf("과일 이름을 입력하시오 : \n");

	for (i = 0; i < n; i++)
	{
		scanf("%s", fruits+i);
	}

	printf("\n\n");

	printf("입력된 과일 이름 출력 : \n\n");

	for (i = 0; i < n; i++)
	{
		printf("%s\n", fruits+i);
	}

	return 0;
}