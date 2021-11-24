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
		printf("1. 추가\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		printf("===========\n");

		printf("정수값을 입력하시오 : ");
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

	printf("제목 : ");
	scanf(" %[^\n]s", m.title);
	//strcpy(m.title, a.title);

	printf("가수 : ");
	scanf(" %[^\n]s", m.singer);
	//strcpy(m.singer, a.singer);

	printf("위치 : ");
	scanf(" %[^\n]s", m.location);
	//strcpy(m.location, a.location);

	printf("장르(0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악)");
	scanf(" %d", &m.genre);
}

void print()
{
	M m;

	printf("제목 : %s\n", m.title);
	printf("가수 : %s\n", m.singer);
	printf("위치 : %s\n", m.location);
	printf("장르(0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악) : %d\n", m.genre);
}

void search()
{
	// strcmp
}