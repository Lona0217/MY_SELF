#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num);

int main()
{
	int num;

	printf("합을 구할 값? ");
	scanf("%d", &num);

	printf("\n1부터 %d까지의 합 : %d\n", num, add(num));

}

int add(int num)
{
	if (num < 2)
		return 1;

	else
		return num + add(num - 1);
}