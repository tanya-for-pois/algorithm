#include <iostream>
#include <cstring>
#include<cstdlib>
using namespace std;

const int SIZE = 80;

class String{
    char str[];

    public:
        String() {
            strcpy(str,""); 
        }
        String(char s[]) {
            strcpy(str, s);
        }
        void getString() {
            cout<<"Insert string less than 80 symbols: ";
            cin.getline(str, sizeof(str));
        }
 
        void printString() const {
            cout<<str<<endl;
        }

};

int main() {
    String string1;

    string1.getString();
    string1.printString();

    String string2("new string");
    string2.printString();
  
    return 0;
}