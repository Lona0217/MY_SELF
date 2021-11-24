#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[50];
	int cLength;

	printf("공백 문자가 있는 문자열을 입력하시오: ");
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