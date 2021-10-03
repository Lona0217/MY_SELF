#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double x,y;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("평을 입력하세요: ");
	scanf("%lf", &x);

	y = x * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.\n", y);

	return 0;
}