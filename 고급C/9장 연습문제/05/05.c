#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num);

int main()
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("\n1���� %d������ �� = %d\n", num, sum(num));
}

int sum(int num)
{
	if (num < 1)
		return 0;
	/* 
	if (num <= 1)
		return 1;
	*/

	else
		return num + sum(num - 1);
}