#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> // system("cls")
#include <conio.h> // _getch(); // scanf와 비슷하지만 cmd창에 뭘 안 올려줌
#define SIZE 10

int main()
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("좌석을 예약하시겠습니까? ( y 또는 n ) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10 \n");
		printf("----------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("몇번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans2);
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 자리입니다.\n");

		_getch();

		system("cls");
	}

	return 0;
}