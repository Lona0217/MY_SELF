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
		printf("연산을 입력하시오: ");
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

	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	value = x + y;
	printf("연산 결과: %d\n", value);
}

void min(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	value = x - y;
	printf("연산 결과: %d\n", value);
}

void mul(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	value = x * y;
	printf("연산 결과: %d\n", value);
}

void div(int x, int y)
{
	static int count = 0;
	int value = 0;
	count++;

	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	value = x / y;
	printf("연산 결과: %d\n", value);
}