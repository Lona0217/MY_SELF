#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main()
{
	srand((unsigned)time(NULL)); // unsigned: 형변환,음수 방지, NULL: time의 매개변수
	// seedrandom: 계속해서 난수 생성, 계속해서 바뀜

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;

	int temp;
	for (int i = 0; i < 100; i++)
	{
		temp = get_dice_face();

		switch (temp)
		{
		case 1:
			num1++;
			break;

		case 2:
			num2++;
			break;

		case 3:
			num3++;
			break;

		case 4:
			num4++;
			break;

		case 5:
			num5++;
			break;

		case 6:
			num6++;
			break;

		}
	}

	printf("1->%d\n", num1);
	printf("2->%d\n", num2);
	printf("3->%d\n", num3);
	printf("4->%d\n", num4);
	printf("5->%d\n", num5);
	printf("6->%d\n", num6);
}

int get_dice_face()
{
	return rand() % 6 + 1;
}