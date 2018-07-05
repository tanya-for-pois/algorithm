#include <iostream>
#include <vector>
using namespace std;

class Student{
    string name;
    string surname;
    int age;
    float averageMark;

    public:
        Student(string n, string sur, int years, float mark){
            name = n;
            surname = sur;
            age = years;
            averageMark = mark;
        }
        string getName(){
            return name;
        }
        string getSurname(){
            return surname;
        }
        int getAge(){
            return age;
        }
        float getMark(){
            return averageMark;
        }
};

class Group{
    int size;
    int groupNumber;
    vector<Student> students;

    public:
        Group(int num){
            groupNumber = num;
        }

        void setSize(int s){
            size = s;
        }

        int getSize(){
            return size;
        }

        void setStudents(vector<Student> list){
            students = list;
        }
};

int main(){
    Student student("John", "Doe", 19, 5.0);
    cout << "Hello, " << student.getName() << "! \n";
    return 0;
}