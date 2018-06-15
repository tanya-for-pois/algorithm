#include <stdio.h>
#include <stdlib.h>

int main() {

    //Задача с калькулятором - стр. 28
    int a, b, result;
    printf("Введите первое число: ");
    scanf("%d", &a);

    printf("Введите второе число: ");
    scanf("%d", &b);

    printf("Сколько будет %d умножить на %d?\n", a, b);
    scanf("%d", &result);

    if (result == a*b) {
        printf("Good job!\n");
    } else {
        printf("Неа, правильный ответ - %d\n", a*b);
    }
    return 0;
}