#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;

    printf("������ �Է��Ͻÿ� . : ");
    scanf("%d", &a);
    for (int i = a;i >= 1;i--) {
        for (int j = 1;j <= a;j++) {
            if (j < i) printf(" ");
            else printf("*");
        }
        printf("\n");

    }
    return 0;
}