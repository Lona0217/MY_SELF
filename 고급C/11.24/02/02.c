#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 2161073, "�̴ټ�", 4.3 };
	struct student* p;

	p = &s;

	printf("�й� : %d, �̸� : %s, ���� : %.1lf\n", s.number, s.name, s.grade);
	printf("�й� : %d, �̸� : %s, ���� : %.1lf\n", (*p).number, (*p).name, (*p).grade);
	printf("�й� : %d, �̸� : %s, ���� : %.1lf\n", p->number, p->name, p->grade);

	return 0;
}