#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main()
{
	srand((unsigned)time(NULL)); // unsigned: ����ȯ,���� ����, NULL: time�� �Ű�����
	// seedrandom: ����ؼ� ���� ����, ����ؼ� �ٲ�
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