#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x = 100, y = 200;
	int sum;
	int diff;

	get_sum_diff(x, y, &sum, &diff);

	printf("���ҵ��� �� = %d\n", sum);
	printf("���ҵ��� �� = %d\n", diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}