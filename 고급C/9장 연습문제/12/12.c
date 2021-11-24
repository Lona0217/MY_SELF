#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int fib(int n);

int main()
{
	int n;

	for (int n = 0; n < SIZE; n++)
	{
		printf("fib(%d) = %d\n", n, fib(n));
	}

	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}