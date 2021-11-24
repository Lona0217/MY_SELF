#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct email {
	char title[20];
	char sender[20];
	char receiver[20];
	char content[50];
	char date[20];
	int pri;
};

int main()
{
	struct email e;

	printf("제목 : ");
	scanf("%[^\n]s", e.title);
	printf("\n");

	printf("수신자 : ");
	scanf(" %[^\n]s", e.sender);
	printf("\n");

	printf("발신자 : ");
	scanf(" %[^\n]s", e.receiver);
	printf("\n");

	printf("내용 : ");
	scanf(" %[^\n]s", e.content);
	printf("\n");

	printf("날짜 : ");
	scanf(" %[^\n]s", e.date);
	printf("\n");

	printf("우선순위 : ");
	scanf("%d", &e.pri);
	printf("\n");
}