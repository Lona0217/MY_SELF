#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight, height, result;

	printf("Ű�� ü���� �Է��ϼ���: ");
	scanf("%lf %lf", &height, &weight);

	result = (height - 100) * 0.9;

	if (weight < result)
	{
		printf("��ü���Դϴ�.\n");
	}
	else if (weight == result)
	{
		printf("ǥ���Դϴ�.\n");
	}
	else
	{
		printf("��ü���Դϴ�.\n");
	}

	return 0;
}