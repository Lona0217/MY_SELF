#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);

	if (age > 12 && age < 65)
	{
		if (time <= 17)
			printf("요금은 34,000입니다.\n");
		else
			printf("요금은 10,000입니다.\n");
	}

	else
	{
		if (time <= 17)
			printf("요금은 25,000입니다.\n");
		else
			printf("요금은 10,000입니다.\n");
	}

	return 0;
}