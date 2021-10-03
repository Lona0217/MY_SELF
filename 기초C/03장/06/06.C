#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double wm, we;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &we);

	wm = we * 0.17;

	printf("달에서의 몸무게는 %lfkg입니다.\n", wm);

	return 0;
}