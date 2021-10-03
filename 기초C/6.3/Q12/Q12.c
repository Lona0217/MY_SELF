#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n);

int main()
{
	int n=0;
	while (n>=0)
	{
		printf("값을 입력하시오(종료는 음수): ");
		scanf("%d", &n);

		if (n < 0) {
			break;
		}

		else {
			print_value(n);
		}
	}
}

void print_value(int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("*");
	}

	printf("\n");
}