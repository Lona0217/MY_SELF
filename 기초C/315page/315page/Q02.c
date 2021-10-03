#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int a;

    printf("정수를 입력하세요 . : ");
    scanf("%d", &a);

    for (int i = a;i >= 1;i--) 
    {
        for (int j = 1;j <= i * 2 - 1 + (a - i);j++) 
        {
            if (a - i >= j)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;

}