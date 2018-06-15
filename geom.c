#include<stdio.h>
#include<math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

float circleSquare(int radus) {
    return pow(radus, 2.0)*M_PI;
}

int triangleSquare(int height, int base) {
    return height * base / 2;
}

int cirlceLength(int radus) {
    return 2 * M_PI * radus;
}

int rectangleSquare(int width, int height) {
    return width * height;
}

int trapeziumSquare(int a, int b, int h) {
    return (a + b) / 2 * h;
}

int main(int argc, char const *argv[])
{
    int r = 4;
   
    printf("If radius = %d, circle square is %f\n", r, circleSquare(r));
    printf("And circle length is %d\n\n", cirlceLength(r));

    int a = 6;
    int h = 4;

    printf("Triangle square %d\n\n", triangleSquare(h, a));
    printf("For rectangle of %d cm width and %d cm height square is %d\n\n", a, h, rectangleSquare(h, a));
    
    int trapeziumA = 4;
    int trapeziumB = 6;
    int trapeziumHeight = 5;
    printf("For trapezium: %d\n", trapeziumSquare(trapeziumA, trapeziumB, trapeziumHeight));
    return 0;
}

