#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int x, int y);
void min(int x, int y);
void mul(int x, int y);
void div(int x, int y);

int main()
{
	int x, y;
	char op;
	int i = 0;
	
	while (1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &op, &y);

		switch (op)
		{
		case '+':
			add(x, y);
			break;
			
		case '-':
			min(x, y);
			break;

		case'*':
			mul(x, y);
			break;

		case'/':
			div(x, y);
			break;
		}
	}
}

void add(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	value = x + y;
	printf("���� ���: %d\n", value);
}

void min(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	value = x - y;
	printf("���� ���: %d\n", value);
}

void mul(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	value = x * y;
	printf("���� ���: %d\n", value);
}

void div(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	value = x / y;
	printf("���� ���: %d\n", value);
}