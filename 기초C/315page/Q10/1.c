
int main() 
{
    int a;

    printf("정수를 입력하시오 . : ");
    scanf("%d", &a);

    for (int i = 1;i <= a;i++) 
    {
        for (int j = 1;j <= i;j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}