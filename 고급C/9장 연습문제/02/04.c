#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MOD 25173;

int get_random();

int main()
{
	int temp;

	for (int i = 0; i < 3; i++)
	{
		temp = get_random();
		printf("%d\n", temp);
	}
	return 0;
}

int get_random()
{
	static int inited = 0;

	if (inited <= 0)
	{
		srand((unsigned)time(NULL));
		inited++;
		printf("초기화 실행\n");
	}

	return rand() % MOD;
}