/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void average(int x[]);
void standard_deviation(int x[]);
int data(int x[]);

int main()
{
	int x[SIZE] = { 0 };
	data(x);
	average(x);
	standard_deviation(x);

}

int data(int x[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf("%d", &x[i]);

	}

	return 0;
}

void average(int x[])
{
	int m=0;
	int sum_m=0;

	for (int i = 0;i < SIZE; i++)
	{
		sum_m += x[i];
		m = (1 / SIZE) * sum_m;
	}
	printf("\n��հ��� %d\n\n", m);

}

void standard_deviation(int x[])
{
	int m=0;
	int v=0;
	int sum_m=0;
	int sum_v=0;

	for (int i = 0;i < SIZE; i++)
	{
		m = (1 / SIZE) * sum_m;
		sum_v += (x[i] - m) * (x[i] - m);
		v = (1 / SIZE) * sum_v;
	}		
	printf("ǥ���������� %d\n\n", v);

}
*/

// ��հ��� ǥ���������� ������ ����...