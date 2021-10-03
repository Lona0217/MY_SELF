#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

int check(int pw);

int main()
{
	int pw, result;

	while (1) {
		printf("비밀번호: ____\b\b\b\b");
		scanf("%d", &pw);
		result = check(pw);
		if (result == SUCCESS) break;
	}
	printf("SUCCESS\n");
	return 0;
}

int check(pw)
{
	static int super_pw = 1234;
	static int try = 0;

	try++;
	
	if (pw == super_pw)
		return SUCCESS;
	else
		return FAIL;

	if (try >= LIMIT) {
		printf("로그인 시도횟수 초과\n");
		exit(1);
	}
	
}