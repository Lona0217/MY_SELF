#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[SIZE];
	
	for (int i = 0; i < SIZE;i++)
	{
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
		scanf("%lf", &list[i].grade);
	}

	printf("\n");

	for (int i = 0;i < SIZE;i++)
	{
		printf("�̸� : %s, ���� : %.1lf\n", list[i].name, list[i].grade);
	}

	return 0;
}