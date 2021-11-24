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
void addMusic(MUSIC* music);    // 수정을 위해 포인터로
void printMusic(MUSIC* music);
void searchMusic(MUSIC* music);
void deleMusic(MUSIC* music);

int index;  // 무슨 인덱스를 추가했는지 삭제했는지 알기 위해서

int main()
{
    int option;     // 메뉴
    MUSIC music[50];

    while (1)
    {
        menuScreen();
        printf("정수값을 입력하시오: ");
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
    printf("1. 추가\n");
    printf("2. 출력\n");
    printf("3. 검색\n");
    printf("4. 삭제\n");
    printf("5. 종료\n");
    printf("=====================\n");
}

void addMusic(MUSIC* music)
{
    printf("제목: ");
    scanf(" %[^\n]s", (music + index)->title);      // music [index]
    printf("가수: ");
    scanf(" %[^\n]s", (music + index)->singer);     // 위에서 받는 enter값을 앞에 space에 담음
    printf("위치: ");
    scanf(" %[^\n]s", (music + index)->location);
    printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
    scanf("%d", &((music + index)->genre));
    index++;    // 곡 하나 받으면 증가
}

void printMusic(MUSIC* music)
{
    for (int i = 0; i < index; i++)
    {
        printf("제목: %s\t가수: %s\t위치: %s\t장르: ", (music + i)->title, (music + i)->singer, (music + i)->location);     //music [i]
        switch ((music + i)->genre)
        {
        case 0:
            printf("가요\n");
            break;
        case 1:
            printf("팝\n");
            break;
        case 2:
            printf("클래식\n");
            break;
        case 3:
            printf("영화음악\n");
            break;
        }
        printf("\n");
    }
}

void searchMusic(MUSIC* music)
{
    char tTemp[100];

    printf("제목을 입력하세요: ");
    scanf(" %[^\n]s", tTemp);

    for (int i = 0; i < index; i++)
    {
        char* temp = strstr((music + i)->title, tTemp);
        if (temp != NULL)
        {
            printf("제목: %s\t가수: %s\t위치: %s\t장르: ", (music + i)->title, (music + i)->singer, (music + i)->location);
            switch ((music + i)->genre)
            {
            case 0:
                printf("가요\n");
                break;
            case 1:
                printf("팝\n");
                break;
            case 2:
                printf("클래식\n");
                break;
            case 3:
                printf("영화음악\n");
                break;
            }
            printf("\n");
            return;     // 값이 있기에 돌 필요 없다.
        }
    }
    printf("곡이 존재하지 않습니다.\n");
}

void deleMusic(MUSIC* music)
{
    char delTitle[100];
    printf("삭제할 곡의 제목을 입력하세요: ");
    scanf(" %[^\n]s", delTitle);

    for (int i = 0; i < index; i++)
    {
        char* temp = strstr((music + i)->title, delTitle);
        if (temp != NULL)
        {
            printf("%s이 곡을 삭제하였습니다.\n", (music + i)->title);
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

    printf("삭제할 곡이 존재하지 않습니다.\n");
}