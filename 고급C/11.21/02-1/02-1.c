#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[50];
	int cLength;

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", c);
	cLength = strlen(c);

	for (int i = 0; i < cLength; i++)
	{
		if (isspace(c[i]) == 0)
		{
			printf("%c", c[i]);
		}
	}

	return 0;

}