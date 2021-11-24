#include <stdio.h>

void getSensorData(double* p);

int main()
{
	double sensorData[3];
	getSensorData(sensorData);
	double* p = &sensorData;

	printf("왼쪽 센서와 장애물과의 거리: %lf\n", *p);
	printf("중간 센서와 장애물과의 거리: %lf\n", *(p + 1));
	printf("오른쪽 센서와 장애물과의 거리: %lf\n", *(p + 2));

	return 0;
}

void getSensorData(double* p)
{
	*p = rand() % 100;
	*(p + 1) = rand() % 100; //*(p++)은 안됨 // p++ > p=p+1 //p+1 > p+1
	*(p + 2) = rand() % 100;

	return;
}