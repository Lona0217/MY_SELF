#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int n);

int main()
{
	int n=10;

	printf("%.6lf\n", recursive(n));

	return 0;
}

double recursive(int n)
{
	if (n > 0)
		return 1.0 / n + recursive(n - 1);
	else
		return 0;
}