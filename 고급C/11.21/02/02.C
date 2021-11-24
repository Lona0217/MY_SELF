#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[50] = { NULL };

	printf("공백 문자가 있는 문자열을 입력하시오: ");
	scanf("%[^\n]s", c);

	for (int i = 0; c[i] != NULL; i++)
	{
		if (isspace(c[i]) == 0)
		{
			printf("%c", c[i]);
		}
	}

	return 0;

}