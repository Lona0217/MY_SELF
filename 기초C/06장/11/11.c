#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char text;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &text);

	switch (text)
	{
	case 'R':
	case 'r':
		printf("Rectagle\n");
		break;

	case 'T':
	case 't':
		printf("Triangle\n");
		break;

	case 'C':
	case 'c':
		printf("Circle\n");
		break;

	default:
		printf("Unknown\n");
		break;
	}

	return 0;
}