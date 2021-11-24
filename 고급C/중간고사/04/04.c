#include <stdio.h>
#define N_DATA 10

void array_copy(int a[], int b[], int size);
void array_print(int a[], int size);

int main()
{
	int A[N_DATA] = { 1,2,3 };
	int B[N_DATA] = { 0 };

	array_print(A, N_DATA);
	array_copy(A, B, N_DATA);
	array_print(B, N_DATA);

	return 0;
}

void array_copy(int a[], int b[], int size)
{
	for (size = 0; size < N_DATA; size++)
	{
		b[size] =a[size];
	}
}

void array_print(int a[], int size)
{
	for (size = 0; size < N_DATA; size++)
	{
		printf("%d ", a[size]);
	}
	printf("\n");
}