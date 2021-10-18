#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int count(int num);

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("자리수의 개수: %d", count(num));

	return 0;
}

/*int count(int num)
{
	
}*/