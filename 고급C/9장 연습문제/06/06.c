#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int b, int p);

int main()
{
	int b, p;

	printf("�ؼ�: ");
	scanf("%d", &b);
	printf("����: ");
	scanf("%d", &p);

	printf("%d^%d = %d\n", b, p, power(b, p));
}

int power(int b, int p)
{
	if (p < 1)
		return 1;
	else
		return b * power(b, p - 1);
}