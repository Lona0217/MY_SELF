#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double x,y;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &x);

	y = x * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�.\n", y);

	return 0;
}