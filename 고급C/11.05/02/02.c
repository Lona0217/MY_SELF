#include <stdio.h>

void getSensorData(double* p);

int main()
{
	double sensorData[3];
	getSensorData(sensorData);
	double* p = &sensorData;

	printf("���� ������ ��ֹ����� �Ÿ�: %lf\n", *p);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf\n", *(p + 1));
	printf("������ ������ ��ֹ����� �Ÿ�: %lf\n", *(p + 2));

	return 0;
}

void getSensorData(double* p)
{
	*p = rand() % 100;
	*(p + 1) = rand() % 100; //*(p++)�� �ȵ� // p++ > p=p+1 //p+1 > p+1
	*(p + 2) = rand() % 100;

	return;
}