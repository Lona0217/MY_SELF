#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main()
{
	srand((unsigned)time(NULL)); // unsigned: 형변환,음수 방지, NULL: time의 매개변수
	// seedrandom: 계속해서 난수 생성, 계속해서 바뀜
	int num[6] = { 0 };
	
	int temp;
	for (int i = 0; i < 100; i++)
	{
		temp = get_dice_face();
		num[temp]++;
		
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d->%d\n", i+1,num[i]);
	}
}

int get_dice_face()
{
	return rand() % 6;
}