#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, choose;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��) ");
	scanf("%d", &num);

	choose = (rand() % 3 + 1);

	if (num == 1)
	{
		if (choose == 1)
			printf("���º�\n");
		else if (choose == 2)
			printf("���α׷� ��\n");
		else
			printf("����� ��\n");
	}

	else if (num == 2)
	{
		if (choose == 1)
			printf("����� ��\n");
		else if (choose == 2)
			printf("���º�\n");
		else
			printf("���α׷� ��\n");
	}

	else
	{
		if (choose == 1)
			printf("���α׷� ��\n");
		else if (choose == 2)
			printf("����� ��\n");
		else
			printf("���º�\n");
	}


	return 0;
}