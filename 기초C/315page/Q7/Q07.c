#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int a;

    printf("정수를 입력하시오 . : ");
    scanf("%d", &a);

    for (int i = a;i > 0;i--) 
    {
        for (int j = 1;j <= i;j++) 
        {
            printf("*");
        }

        printf("\n");
    }

	return 0;
}