#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &num);

	printf("%d<<%d�� ��: %d\n", x, num, x << num);

	return 0;
}