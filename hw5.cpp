#include <stdlib.h>
#include <iostream>

using std::cin;
using std::cout;

/*Для перевода целой части (или просто целого) числа необходимо разделить ее 
на (основание системы счисления) и продолжать делить частные от деления до тех пор,
пока частное не станет равным 0. Значения получившихся остатков, 
взятые в обратной последовательности, образуют искомое число. */

int main() {
    int sysar[36];
    int num, sysnum, i=0,n;
    int ost, num1, resnum=0, count=1;

    cout<<"Enter integer number\n";
    cin>>num;
    cout<<"Enter system number\n";
    cin>>sysnum;

    while (num>0) {
        num1=num;
        num/=sysnum;
        ost=num1-num*sysnum;
        sysar[i]=ost;
        i++;
    }
    i--;
    for (;i>=0;i--){
        if (sysar[i]>=10){
            n=sysar[i]+55;
            cout<<char(n);
        }
        else  cout<<sysar[i];
    }
    cout<<"\n";

    return 0;
}