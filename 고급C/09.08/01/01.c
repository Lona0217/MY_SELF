#include <stdio.h>

void save(int amount);

int balance; // �����̵� static�̵� ����� ����

int main()
{
	printf("==================================\n");
	printf("�Ա� \t ��� \t\t �ܰ� \n");
	printf("==================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==================================\n");

	return 0;
}

void save(int amount)
	{
		static int balance = 0; // int�� long���� �ۼ��ص� ������. // �ܰ�

		if (amount >= 0) //�Ա�
			printf("%d \t \t\t", amount);
		else //���
			printf("\t %d \t\t", -amount);

		balance += amount;
		printf("%d\n", balance); //�� ���� �ۼ��� �Ǵ°���...? -> �׳� �� �� ������ �ԷµǴ� �� ����..
	}