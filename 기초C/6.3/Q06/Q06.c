#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (even(n))
		printf("even()�� ���: ¦��\n");
	else
		printf("even()�� ���: Ȧ��\n");

	printf("absolute()�� ���: %d\n", absolute(n));

	if (sign(n) == 1)
		printf("sign()�� ���: ���\n");
	else if (sign(n) == 0)
		printf("sign()�� ���: 0\n");
	else
		printf("sign()�� ���: ����\n");

	return 0;
}

int even(int n)
{
	if (n % 2)
		return 0;
	else
		return 1;
}

int absolute(int n)
{
	if (n < 0)
		return n * (-1);
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}