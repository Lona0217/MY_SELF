#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complex
{
	double real;
	double imag;
}COM;

COM complex_add(COM c1, COM c2);
COM complex_mul(COM c1, COM c2);

int main()
{
	COM c1, c2;
	COM result1, result2;
	char op;
	char temp;

	scanf("%lf%c%lf%c", &c1.real, &op, &c1.imag, &temp);
	scanf("%lf%c%lf%c", &c2.real, &op, &c2.imag, &temp);

	result1 = complex_add(c1, c2);
	result2 = complex_mul(c1, c2);

	printf("add : %lf + %lfi\n", result1.real, result1.imag);
	printf("mul : %lf + %lfi\n", result2.real, result2.imag);

	return 0;
}

COM complex_add(COM c1, COM c2)
{
	COM result;

	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}

COM complex_mul(COM c1, COM c2)
{
	COM result;

	result.real = c1.real * c2.real - c1.imag * c2.imag;
	result.imag = c1.real * c2.imag + c1.imag * c2.real;

	return result;
}