#include <stdio.h>
#include <stdlib.h>

/*page 30 of presentation + 10 kotikov*/
int main() {

    int a;
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
        case 10:
            printf("Еда %d\n", a);
            break;
        default:
            printf("Ну, тоже какая-то еда...\n");
            break;
    }

    getchar();
    printf("\n");

    //Числа от 4 до 15
    for(int i = 4; i < 16; i++){
        printf("%d ", i);
    }
    printf("\n");

    //Числа от 26 до 15
    for(int i = 26; i >= 15; i--){
        printf("%d ", i);
    }
    printf("\n");

    //Таблица умножения на 5
    for(int i = 1; i < 10; i++){
        printf("%d * 5 = %d\n", i, i*5);
    }
    printf("\n");

     //Таблица умножения на 9
     for(int i = 1; i < 10; i++){
        printf("%d * 9 = %d\n", i, i*9);
    }
    printf("\n");

    //Сумма составляющих чисел
    int b;
    printf("Введите число ");
    scanf("%d", &b);
    getchar();

    int result = 0;
    for(int i = 1; i <= b; i++) {
        result = result + i;
    }

    printf("Сумма чисел, его составляющих - %d\n", result);

    //количество четных чисел вплоть до данного натурального числа
    int input; 
    int count = 0;
    printf("Введите натуральное число ");
    scanf("%d", &input);

    for(int i = 0; i <= input; i++){
        if (i%2 == 0) {
            count++;
        }
    }

    printf("%d\n\n", count);  
    
    printf("натуральные числа от 0 до 87, которые при делении на 7 дают остаток 1, 2 или 5:\n");

    /*Даны натуральные числа от 0 до 87. 
    Вывести на консоль те из них, которые 
    при делении на 7 дают остаток 1, 2 или 5*/
    for(int i = 0; i < 87; i++) {
        if (i%7 == 1 || i%7 == 2 || i%7 == 5 ) {
            printf("%d ", i);
        }
    }

    return 0;
}