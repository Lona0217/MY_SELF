#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double stick, shadow, pyramids, height;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &stick);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &shadow);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &pyramids);

	height = (pyramids * stick) / shadow;

	printf("피라미드의 높이는 %lf입니다.\n", height);

	return 0;
}