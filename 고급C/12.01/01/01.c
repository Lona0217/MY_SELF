#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;
	char* fruits[5];

	n = sizeof(fruits) / sizeof(fruits[0]);

	printf("���� �̸��� �Է��Ͻÿ� : \n");

	for (i = 0; i < n; i++)
	{
		scanf("%s", fruits+i);
	}

	printf("\n\n");

	printf("�Էµ� ���� �̸� ��� : \n\n");

	for (i = 0; i < n; i++)
	{
		printf("%s\n", fruits+i);
	}

	return 0;
}