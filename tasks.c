#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    /* system("chcp 1251");
    system("cls"); */
    printf("Выберите котика ");
    scanf("%d", &a);
    getchar();

    switch (a) {
        case 1:
            printf("Еда %d\n", a);
            break;
        case 2:
            printf("Еда %d\n", a);
            break;
        case 3:
            printf("Еда %d\n", a);
            break;
        case 4:
            printf("Еда %d\n", a);
            break;
        case 5:
            printf("Еда %d\n", a);
            break;
        case 6:
            printf("Еда %d\n", a);
            break;
        case 7:
            printf("Еда %d\n", a);
            break;
        case 8:
            printf("Еда %d\n", a);
            break;
        case 9:
            printf("Еда %d\n", a);
            break;      
    }
 /*    printf("Введите второе число ");
    scanf("%d", &b); */

    getchar();

    for(int i = 4; i < 16; i++){
        printf("%d\n", i);
    }

    for(int i = 1; i < 10; i++){
        printf("%d * 5 = %d\n", i, i*5);
    }

     for(int i = 1; i < 10; i++){
        printf("%d * 9 = %d\n", i, i*9);
    }

    int b;
    printf("Введите число ");
    scanf("%d", &b);
    getchar();

    int result = 0;
    for(int i = 1; i < b; i++) {
        result = result + i;
    }

    printf("%d\n", result);
    return 0;
}