#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int virus = 10, min = 0;

	while (virus <= 1000000)
	{
		virus *= 3;
		min += 20;
	}

	printf("\n�� %d�����Դϴ�.\n", virus);
	printf("\nvirus�� �鸸������ �Ǵ� �ð��� %d�ð� %d���Դϴ�.\n", min / 60, min % 60);

	return 0;
}