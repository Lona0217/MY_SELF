#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct music {
    char title[100];
    char singer[100];
    char location[100];
    int genre;
}MUSIC;

void menuScreen();
void addMusic(MUSIC* music);    // ������ ���� �����ͷ�
void printMusic(MUSIC* music);
void searchMusic(MUSIC* music);
void deleMusic(MUSIC* music);

int index;  // ���� �ε����� �߰��ߴ��� �����ߴ��� �˱� ���ؼ�

int main()
{
    int option;     // �޴�
    MUSIC music[50];

    while (1)
    {
        menuScreen();
        printf("�������� �Է��Ͻÿ�: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addMusic(music);
            break;
        case 2:
            printMusic(music);
            break;
        case 3:
            searchMusic(music);
            break;
        case 4:
            deleMusic(music);
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}

void menuScreen()
{
    printf("=====================\n");
    printf("1. �߰�\n");
    printf("2. ���\n");
    printf("3. �˻�\n");
    printf("4. ����\n");
    printf("5. ����\n");
    printf("=====================\n");
}

void addMusic(MUSIC* music)
{
    printf("����: ");
    scanf(" %[^\n]s", (music + index)->title);      // music [index]
    printf("����: ");
    scanf(" %[^\n]s", (music + index)->singer);     // ������ �޴� enter���� �տ� space�� ����
    printf("��ġ: ");
    scanf(" %[^\n]s", (music + index)->location);
    printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): ");
    scanf("%d", &((music + index)->genre));
    index++;    // �� �ϳ� ������ ����
}

void printMusic(MUSIC* music)
{
    for (int i = 0; i < index; i++)
    {
        printf("����: %s\t����: %s\t��ġ: %s\t�帣: ", (music + i)->title, (music + i)->singer, (music + i)->location);     //music [i]
        switch ((music + i)->genre)
        {
        case 0:
            printf("����\n");
            break;
        case 1:
            printf("��\n");
            break;
        case 2:
            printf("Ŭ����\n");
            break;
        case 3:
            printf("��ȭ����\n");
            break;
        }
        printf("\n");
    }
}

void searchMusic(MUSIC* music)
{
    char tTemp[100];

    printf("������ �Է��ϼ���: ");
    scanf(" %[^\n]s", tTemp);

    for (int i = 0; i < index; i++)
    {
        char* temp = strstr((music + i)->title, tTemp);
        if (temp != NULL)
        {
            printf("����: %s\t����: %s\t��ġ: %s\t�帣: ", (music + i)->title, (music + i)->singer, (music + i)->location);
            switch ((music + i)->genre)
            {
            case 0:
                printf("����\n");
                break;
            case 1:
                printf("��\n");
                break;
            case 2:
                printf("Ŭ����\n");
                break;
            case 3:
                printf("��ȭ����\n");
                break;
            }
            printf("\n");
            return;     // ���� �ֱ⿡ �� �ʿ� ����.
        }
    }
    printf("���� �������� �ʽ��ϴ�.\n");
}

void deleMusic(MUSIC* music)
{
    char delTitle[100];
    printf("������ ���� ������ �Է��ϼ���: ");
    scanf(" %[^\n]s", delTitle);

    for (int i = 0; i < index; i++)
    {
        char* temp = strstr((music + i)->title, delTitle);
        if (temp != NULL)
        {
            printf("%s�� ���� �����Ͽ����ϴ�.\n", (music + i)->title);
            for (int j = i; j < index; j++)
            {
                strcpy((music + j)->title, (music + j + 1)->title);
                strcpy((music + j)->singer, (music + j + 1)->singer);
                strcpy((music + j)->location, (music + j + 1)->location);
                (music + j)->genre = (music + j)->genre;
            }
            index--;
            return;
        }
    }

    printf("������ ���� �������� �ʽ��ϴ�.\n");
}