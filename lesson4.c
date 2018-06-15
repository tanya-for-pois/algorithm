#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight;
    /* system("chcp 1251");
    system("cls"); */
    printf("Введите вес кота: ");
    scanf("%d", &weight);

    if ( weight > 5) {
        printf("Caution! Толстый кот\n");
    } else {
        printf("Everything is fine!\n");
    }
    
    getchar();

    int saticfaction;
    printf("Гусь доволен? 1 - нет /0 - да");
    scanf("%d", &saticfaction);

    switch (saticfaction) {
        case 1:
            printf("Пусть пойдет погуляет\n");
            break;
        case 0:
            printf("Ну, ок\n");
            break;
        default:
            printf("Хм...");
    }

    getchar();
    return 0;
}
