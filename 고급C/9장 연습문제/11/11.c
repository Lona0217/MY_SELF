#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binomial_coefficient(int n, int k);

int main()
{
	int n, k;

	printf("n: ");
	scanf("%d", &n);
	printf("k: ");
	scanf("%d", &k);

	printf("%d", binomial_coefficient(n, k));

}

int binomial_coefficient(int n, int k)
{

	if (0 < k && k < n)
		return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
	else
		return 1;
}