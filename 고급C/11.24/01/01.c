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
		printf("학번을 입력하시오 : ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오 : ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수) : ");
		scanf("%lf", &list[i].grade);
	}

	printf("\n");

	for (int i = 0;i < SIZE;i++)
	{
		printf("이름 : %s, 학점 : %.1lf\n", list[i].name, list[i].grade);
	}

	return 0;
}