#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum;

	printf("¦�� �Ǵ� Ȧ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (n % 2 == 1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &n);

		i = 1;
		sum = 0;

		while (i <= n)
		{
			sum += i;
			i = i + 2;
		}

		printf("1���� %d������ Ȧ������ %d�Դϴ�\n", n, sum);

	}

	else
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &n);

		i = 0;
		sum = 0;

		while (i <= n)
		{
			sum += i;
			i = i + 2;
		}

		printf("1���� %d������ ¦������ %d�Դϴ�\n", n, sum);
	}

	return 0;
}