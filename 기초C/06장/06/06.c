#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;

	printf("월번호를 입력하시오: ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("January\n");
		break;

	case 2:
		printf("February\n");
		break;

	case 3:
		printf("March\n");
		break;

	case 4:
		printf("April\n");
		break;

	case 5:
		printf("May\n");
		break;

	case 6:
		printf("June\n");
		break;

	case 7:
		printf("July\n");
		break;

	case 8:
		printf("August\n");
		break;

	case 9:
		printf("September\n");
		break;

	case 10:
		printf("October\n");
		break;

	case 11:
		printf("November\n");
		break;

	case 12:
		printf("December\n");
		break;

	default:
		printf("해당 월이 없습니다.\n");
		break;

	}

	return 0;
}