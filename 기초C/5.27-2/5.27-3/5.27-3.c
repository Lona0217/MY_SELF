#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print0ptions()
{
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
}

double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
	char choice;
	double temp=0.0;

	while (1) {
		print0ptions();
		printf("�޴����� �����ϼ���.");
		scanf(" %c", &choice);
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("�����µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf \n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("ȭ���µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf \n", F2C(temp));
		}
	}

	return 0;
}