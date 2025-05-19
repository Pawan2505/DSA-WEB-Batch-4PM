#include<iostream>
using namespace std;

class Student{
    public :
        static string name; // class level variable
        int age;  // instance variable

        Student(int age){
            this->age = age;
        }

        void details()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

string Student::name = "Pawan";  // satic variable insilisation

int main(){
    Student s1(22);

    s1.details();

    cout << "Access class level variable : " << Student::name << endl; // satic variable access
}