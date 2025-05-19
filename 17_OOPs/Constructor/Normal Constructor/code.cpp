#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int age;
    int rollno;

    Student(string name, int age, int rollno)
    {
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }

    void display()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Rollno : " << this->rollno << endl;
    }
};

int main()
{

    Student s1("Pawan", 25, 11);

    s1.display();
}