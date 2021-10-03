#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char beep = '\a';

	printf("%c\n", beep);
	printf("화재가 발생하였습니다.\n");
	printf("%c\n", beep);

	return 0;
}

/*메시지가 나오고 경보음이 울림...*/