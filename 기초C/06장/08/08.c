#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);

	if (age > 12 && age < 65)
	{
		if (time <= 17)
			printf("����� 34,000�Դϴ�.\n");
		else
			printf("����� 10,000�Դϴ�.\n");
	}

	else
	{
		if (time <= 17)
			printf("����� 25,000�Դϴ�.\n");
		else
			printf("����� 10,000�Դϴ�.\n");
	}

	return 0;
}