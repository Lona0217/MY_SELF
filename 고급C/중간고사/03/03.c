#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num);

int main()
{
	int num;

	printf("���� ���� ��? ");
	scanf("%d", &num);

	printf("\n1���� %d������ �� : %d\n", num, add(num));

}

int add(int num)
{
	if (num < 2)
		return 1;

	else
		return num + add(num - 1);
}