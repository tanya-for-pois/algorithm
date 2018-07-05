#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Counter{
    static const int max = 100;
    static const int min = 0;
    int curretIndex;
    
    public: 

        Counter() {
            curretIndex = 0;
        }
        
        int getMax() {
            return max;
        }

        int getMin(){
            return min;
        }

        void increment(){
            if (curretIndex < max){
                curretIndex++;
            } else {
                cout<<"Counter reached maximum"<<endl;
            }
        } 

        int getCurrent() {
            return curretIndex;
        }

        void setCurrent(int index){
            if (index > max || index < min){
                cout<< "Index out of range, sorry"<<endl;
                return;
            }
            curretIndex = index;
        }
};

 /*Написать функцию, которая сортирует массив по возрастанию 
    или по убыванию, в зависимости от третьего параметра функции.*/
void sortIt(int arrayToSort[], int arraySize, int asc) {
    if (asc == 0) {
        //sort ascending
        sort(arrayToSort, arrayToSort+arraySize);
    } else if (asc == 1) {
        //sort descending
        int temp;
        for (int i = 0; i < arraySize-1; i++){
            for (int j = i+1; j < arraySize; j++){
                if (arrayToSort[i] < arrayToSort[j]){
                temp = arrayToSort[i];
                arrayToSort[i] = arrayToSort[j];
                arrayToSort[j] = temp;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    std::string str;

    Counter counter;
    counter.setCurrent(99);
    printf("min is %d\n", counter.getMin());
    printf("current is %d\n", counter.getCurrent());
    counter.increment();
    printf("current is %d\n", counter.getCurrent());
    counter.increment();


    int intArray[7] = {5, 3, 32, -1, 1, 104, 53};
    sortIt(intArray, 7, 0);
    cout << "Sorted array looks like this." << endl;
    for (size_t i = 0; i != 7; ++i){
        cout << intArray[i] << " ";
    }
    cout << "\nSorted descending: "<<endl;
    sortIt(intArray, 7, 1);   
    for (size_t i = 0; i != 7; ++i){
        cout << intArray[i] << " ";
    }
    return 0;
}
