# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//원의 반지름(radius) 입력받아
//면적(area) 구하기
int main()
{
	double radius, area;
	printf("원의 반지름을 입력: ");
	scanf("%lf", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적: %lf\n", area);

	return 0;
}