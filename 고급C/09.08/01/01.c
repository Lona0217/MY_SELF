#include <stdio.h>

void save(int amount);

int balance; // 전역이든 static이든 결과는 나옴

int main()
{
	printf("==================================\n");
	printf("입금 \t 출금 \t\t 잔고 \n");
	printf("==================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==================================\n");

	return 0;
}

void save(int amount)
	{
		static int balance = 0; // int는 long으로 작성해도 괜찮음. // 잔고

		if (amount >= 0) //입금
			printf("%d \t \t\t", amount);
		else //출금
			printf("\t %d \t\t", -amount);

		balance += amount;
		printf("%d\n", balance); //왜 옆에 작성이 되는거지...? -> 그냥 저 탭 다음에 입력되는 것 같음..
	}