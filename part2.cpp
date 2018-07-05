#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int getRandomNumber(int min, int max) {
    return rand() % ( max - min + 1 ) + min;
}

int getFirstNegativeIndex(int array[]){
    for (int i = 0; i < sizeof(array); i++) {
        if (array[i]< 0) {
            return i;
        }
    }
    return 0;
}

int getLastNegativeIndex(int array[], int size){
    for (int i = size-1; i > 0; i--) {
        if (array[i] < 0) {
            return i;
        }
    }
    return 0;
}

void sortAndPrint(int arr[], int start, int end){
    cout<<"1st negative's index = "<<start<<endl;
    cout<<"last negative's index = "<<end<<endl;
    int temp;
    for (int i = start+1; i < end-1; i++) {
        for (int j = i+1; j < end; j++){
            if (arr[i] > arr[j]){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
    cout << "After sorting: ";
    for (int i =0; i < 20; i++){
         cout << arr[i] << " ";
    }
    cout << "\n\n";
    
}

int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int high = 20;
    int low = -20;
    const int ARRAY_SIZE = 20;
    
    int arr[ARRAY_SIZE];

    cout << "Initial array: ";
    for (int i = 0; i < ARRAY_SIZE; i++){
        arr[i] = getRandomNumber(low, high);
        cout << arr[i] <<" ";
    }
    cout<<"\n";

    int start = getFirstNegativeIndex(arr);
    int end = getLastNegativeIndex(arr, ARRAY_SIZE);

    sortAndPrint(arr, start, end);

    return 0;
}
