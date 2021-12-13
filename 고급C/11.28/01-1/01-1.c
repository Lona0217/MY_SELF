#include <stdio.h>

int main()
{
	char* s = { "Seoul" };

	printf("%d", sizeof(s) / sizeof(char));

	return 0;

}