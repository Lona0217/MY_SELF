#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	char choice;
	int ans, i;
	int seat[SIZE] = { 0 };

	while (1)
	{
		printf("�¼��� �����ϽÁٽ��ϱ�?(y �Ǵ�n)");
		scanf(" %c", &choice);

		if (choice == 'n')
			break;
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10 \n");
		printf("----------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seat[i]);
		printf("\n");

		printf("���° �¼��� �����Ͻðڽ��ϱ�?");
		scanf("%d", &ans);
		if (seat[ans - 1] == 0)
		{
			seat[ans - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}

	return 0;
}