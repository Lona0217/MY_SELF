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

	printf("���� : ");
	scanf("%[^\n]s", e.title);
	printf("\n");

	printf("������ : ");
	scanf(" %[^\n]s", e.sender);
	printf("\n");

	printf("�߽��� : ");
	scanf(" %[^\n]s", e.receiver);
	printf("\n");

	printf("���� : ");
	scanf(" %[^\n]s", e.content);
	printf("\n");

	printf("��¥ : ");
	scanf(" %[^\n]s", e.date);
	printf("\n");

	printf("�켱���� : ");
	scanf("%d", &e.pri);
	printf("\n");
}