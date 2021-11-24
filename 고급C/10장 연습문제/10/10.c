#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

double vector_add(double x[], double y[], double z[]);
double vector_dot_prod(double x[], double y[]);

int main()
{
	srand((unsigned)time(NULL));

	double x[SIZE] = {1,2,3 };
	double y[SIZE] = { 1,2,3 };
	double z[SIZE] = { 0 };

	vector_add(x, y, z);
	printf("\n\n");
	vector_dot_prod(x, y);
	printf("\n");

	return 0;
}

double vector_add(double x[], double y[], double z[])
{
	int i;

	printf("∫§≈Õ¿« «’ = ");

	for (i = 0; i < 3; i++)
	{
		z[i] = x[i] + y[i];
		printf("%.6lf ", z[i]);
	}

	return z[i];
}

double vector_dot_prod(double x[], double y[])
{
	double scalar=0;

	for (int i = 0; i < 3; i++)
	{
		scalar += x[i] * y[i];
	}

	printf("∫§≈Õ¿« ≥ª¿˚ = %.6lf",scalar);

	return scalar;
}