#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct music {
	char title[20];
	char singer[20];
	char location[20];
	int genre;
}M;

void add();
void print();
void search();
M m[100] = { NULL };


int main()
{
	// int n = 0;
	int choose;
	
	while(1)
	{
		printf("===========\n");
		printf("1. �߰�\n");
		printf("2. ���\n");
		printf("3. �˻�\n");
		printf("4. ����\n");
		printf("===========\n");

		printf("�������� �Է��Ͻÿ� : ");
		scanf("%d", &choose);

		switch (choose)
		{
		case 1:
			add();
			break;

		case 2:
			print();
			break;

		case 3:
			search();
			break;

		case 4:
			exit(0);
			break;

		}
	}
}


void add()
{
	M m;

	printf("���� : ");
	scanf(" %[^\n]s", m.title);
	//strcpy(m.title, a.title);

	printf("���� : ");
	scanf(" %[^\n]s", m.singer);
	//strcpy(m.singer, a.singer);

	printf("��ġ : ");
	scanf(" %[^\n]s", m.location);
	//strcpy(m.location, a.location);

	printf("�帣(0 : ����, 1 : ��, 2 : Ŭ����, 3 : ��ȭ����)");
	scanf(" %d", &m.genre);
}

void print()
{
	M m;

	printf("���� : %s\n", m.title);
	printf("���� : %s\n", m.singer);
	printf("��ġ : %s\n", m.location);
	printf("�帣(0 : ����, 1 : ��, 2 : Ŭ����, 3 : ��ȭ����) : %d\n", m.genre);
}

void search()
{
	// strcmp
}