# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� ������(radius) �Է¹޾�
//����(area) ���ϱ�
int main()
{
	double radius, area;
	printf("���� �������� �Է�: ");
	scanf("%lf", &radius);

	area = 3.14 * radius * radius;

	printf("���� ����: %lf\n", area);

	return 0;
}