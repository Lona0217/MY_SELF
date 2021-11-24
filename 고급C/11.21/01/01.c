#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char seps[] = " ,.\t\n";
	char* token = NULL;
	char s[] = "I live in Seoul";
	int flag = 0;

	do{
		if (flag == 0)
		{
			token = strtok(s, seps);
			flag = 1;
		}
		printf("%s ", token);
		token = strtok(NULL, seps);
	} while (token != NULL);

	printf("\n");

	return 0;
}