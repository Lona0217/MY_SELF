#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x[10][3] = { {1,1,1}, {2,4,8},{3,9,27},{4,16,64},{5,25,125},{6,36,216},{7,49,343},{8,64,512},{9,81,729},{10,100,1000} };
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("\n");

	for(int i=0;i<10;i++)
		for (int j = 0;j < 3;j++)
		{
			if (x[i][j] == num)
				printf("%d�� ���������� %d\n", num, x[i][0]);
		}
}

// ���� : �� �����ϰ� �̻���..