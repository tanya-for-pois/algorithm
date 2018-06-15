#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* holidays */
    int day, month;
    printf("Введите день ");
    scanf("%d", &day);

    printf("Введите месяц ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            switch (day) {
                case 1:
                    printf("Happy New Year!\n");
                    break;
                case 7:
                    printf("Happy Orthdox Christmas");
                    break;
                default:
                    printf("No holiday, sorry...");
                    break;
            }
            break;
        case 2:
            switch (day) {
                case 14:
                    printf("Happy Valentine's!\n");
                    break;
                case 23:
                    printf("Smth about army");
                    break;
                default:
                    printf("No holiday, sorry...");
                    break;
            }
            break;
        case 3:
            switch (day) {
                case 8:
                    printf("8 of March!\n");
                    break;
                default:
                    printf("No holiday, sorry...");
                    break;
            }
            break;
        case 5:
             switch (day) {
                case 1:
                    printf("Mir Trud Mai!\n");
                    break;
                case 9:
                    printf("Victory Day!\n");
                    break;
                default:
                    printf("No holiday, sorry...");
                    break;
            }
            break;
        case 11:
            case 7:
                printf("Revolution, yeah!\n");
                break;
            default:
                printf("No holiday, sorry...");
                break;
            break;
        case 12:
            switch (day) {
                case 25:
                    printf("Merry Christmas! Ho-ho-ho\n");
                    break;
                default:
                    printf("No holiday, sorry... But new year is coming!");
                    break;
            }
            break;
    }

    printf("\n");
    return 0;
}
