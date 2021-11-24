#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x[10][3] = { {1,1,1}, {2,4,8},{3,9,27},{4,16,64},{5,25,125},{6,36,216},{7,49,343},{8,64,512},{9,81,729},{10,100,1000} };
	int num;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("\n");

	for(int i=0;i<10;i++)
		for (int j = 0;j < 3;j++)
		{
			if (x[i][j] == num)
				printf("%d의 세제곱근은 %d\n", num, x[i][0]);
		}
}

// 질문 : 좀 희한하게 이상함..