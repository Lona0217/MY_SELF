#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(int num[]);

int main()
{
	srand((unsigned)time(NULL));
	int num[6] = { 0 };
	int count;

	for (int i = 0; i < 1000; i++)
	{
		count = get_dice_face(num);

		if (count % 100 == 0)
		{
			for (int j = 0; j < 6; j++)
			{
				printf("%6d", num[j]);
			}
			printf("\n");
		}
	}

}

int get_dice_face(int num[])
{
	static int count = 0;

	count++;
	num[rand() % 6]++;

	return count;
}