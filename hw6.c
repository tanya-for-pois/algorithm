#include <stdio.h>

void printReversed();
int sumEven(int array[], int arraySize);
int sumOdd(int array[], int arraySize);
int sumThird(int array[], int arraySize);
void printRepeated();
void printMin();
void printMax();
void minOdd();
void printIfBigger();
 
int main(int argc, char const *argv[])
{
    int one, two, three, four, five;
    printf("Введите 5 чисел: ");
    scanf("%d %d %d %d %d", &one, &two, &three, &four, &five);

    int array[] = {one, two, three, four, five};
    int size = sizeof(array)/sizeof(int);

    printReversed(array, size);
    
    printf("sum of even elements = %d\n", sumEven(array, size));
    printf("sum of odd elements = %d\n", sumOdd(array, size));
    printf("sum of every 3rd elements = %d\n", sumThird(array, size));

    printMin(array, size);
    printMax(array, size);
    minOdd(array, size);

    printRepeated(array, size);
    printIfBigger(array, size);

    return 0;
}

//1
void printReversed(int array[], int arraySize) {
    for (int i = arraySize-1; i >= 0; i--) {
            printf("%d ", array[i]);
        }
    printf("\n");
}

//2
int sumEven(int array[], int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i+=2) {
        sum += array[i];
    }
    return sum;
}

//2
int sumOdd(int array[], int arraySize) {
    int sum = 0;
    for (int i = 1; i < arraySize; i+=2) {
        sum += array[i];
    }
    return sum;
}

//6
int sumThird(int array[], int size) {
    int sum = 0;
    for (int i = 2; i < size; i+=3) {
        sum += array[i];
    }
    return sum;
}

//3
void printRepeated(int arr[], int sz) {
    short stat=0;
    printf("Repeated element(s): \n");
    for(int i=0;i<sz;i++){
        
        for(int j=i+1;j<sz;j++){
            if(arr[i]==arr[j]){
                for(int n=j-1;n>=0;n--){
                    if(arr[j]==arr[n])
                        stat++;
                }
                if(stat==1){
                    printf("%d ", arr[i]);
                }
                stat=0;
            }
        }
    }
    printf("\n");
}

//5
void printMin(int array[], int size) {
    int min=array[0]; 

    for (int i=1;i<size;i++){
        if(min>array[i]) {
            min=array[i]; 
        }
    }
    printf("min = %d\n", min);
}

//5
void printMax(int array[], int size) {
    int max=array[0];  
    for (int i=1;i<size;i++){
        if(max<array[i]) {
            max=array[i];
        }
    }
    printf("max = %d\n", max);
}

//4
void minOdd(int array[], int size)
{
    int min;
    for(int i=0; i < size; i++)
    {
        if(array[i]%2 !=0){
            min=array[i];
            break;
        }
    }   

    for(int i = 0; i < size; i++)
    {
        if (array[i] < min && array[i]%2 != 0) {
            min=array[i];
        }
    }
    
    printf("min odd = %d\n", min);
}

//7
void printIfBigger(int array[], int size) {
    printf("Elements bigger than previous: ");
    for (int i = 0; i < size-1; i++) {
        if (array[i+1] > array[i]){
            printf("%d ", array[i+1]);
        }
    }
    printf("\n");
}

