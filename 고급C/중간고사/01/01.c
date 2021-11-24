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
		printf("좌석을 예약하시곘습니까?(y 또는n)");
		scanf(" %c", &choice);

		if (choice == 'n')
			break;
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10 \n");
		printf("----------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seat[i]);
		printf("\n");

		printf("몇번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans);
		if (seat[ans - 1] == 0)
		{
			seat[ans - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 자리입니다.\n");
	}

	return 0;
}