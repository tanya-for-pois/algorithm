#include <stdio.h>
void printPoem();
int squareSquare();
void printSymbols(char c, int count);

void main()
{
    printPoem();

    int a;
    printf("Введите сторону квадрата ");
    scanf("%d", &a);
    printf("Площадь: %d\n", squareSquare(a));

    char input;
    int count;
    printf("Введите символ ");
    scanf(" %c", &input);
    getchar();

    printf("Введите количество ");
    scanf("%d", &count);
    printSymbols(input, count);

}

void printPoem(){
    printf("Белеет парус одинокий\nВ тумане моря голубом\n\n");

    /*Но вообще, конечно, "выводит постоянно новый стих" должно выглядеть как-то так
    while (true) {
        generateRandomPoem(); что бы это ни значило...
    }*/
}

int squareSquare(int a){
    return a*a;
}

void printSymbols(char c, int count){
    for (int i =0; i < count; i++){
        printf("%c", c);
    }
    printf("\n");
}