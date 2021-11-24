#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	srand((unsigned)time(NULL));

	int count[SIZE] = { 0 };
	int num;
	
	for (num = 0;num < 100; num++)
		++count[rand() %10];

	printf("¹øÈ£º° ÂïÈù È½¼ö : ");
	
	for (int i = 0; i < 10; i++)
		printf("%3d", count[i]);

	int max = 0;

	for(num=0; num<10; num++)
	{
		if (count[max] < count[num])
			max = num;
	}
		
	printf("\n°¡Àå ¸¹ÀÌ ³ª¿Â ¼ö = %d\n", max);

	return 0;
}