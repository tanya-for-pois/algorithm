#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MALE = 0;
const int FEMALE = 1;

class Person{
    
    char name[20];
    int age;
    int sex;
    char phoneNumber[20];

    public:
        Person(){}
        Person(char name[], int age) {
            strcpy(this->name, name);
            this->age = age;
        }

        Person(char name[], int age, int sex) {
            strcpy(this->name, name);
            this->age = age;
            this->sex = sex;
        }

        Person(char name[], int age, int sex, char phoneNumber[]) {
            strcpy(this->name, name);
            this->age = age;
            this->sex = sex;
            strcpy(this->phoneNumber, phoneNumber);
        }

        char* getName(){
            return name;
        }

        void setName(char name[]) {
            strcpy(this->name, name);
        }

        char* getPhoneNumber(){
            return phoneNumber;
        }

        void setPhoneNumber(char phoneNumber[]) {
            strcpy(this->phoneNumber, phoneNumber);
        }

        int getAge() {
            return age;
        }

        void setAge(int age) {
            this->age = age;
        }

        int getSex() {
            return sex;
        }

        void setSex(int sex) {
            this->sex = sex;
        }

        void print() {
            cout<< name<< " is a "<<age<<" years old ";
            if (sex == MALE) {
                cout<<"man.\nHis ";
            }else {
                cout<< "woman.\nHer ";
            }
            cout<<"phone number is: "<<phoneNumber<<"\n"<<endl;
        }

};

int main(int argc, char const *argv[])
{

    Person person;
    person.setName("John");
    person.setPhoneNumber("+375 17 000 00 00");
    person.setAge(16);
    person.setSex(MALE);

    person.print();

    Person newPerson;
    newPerson.setName("Anna Maria");
    newPerson.setPhoneNumber("+375 29 000 00 00");
    newPerson.setAge(19);
    newPerson.setSex(FEMALE);

    newPerson.print();
    return 0;
}
