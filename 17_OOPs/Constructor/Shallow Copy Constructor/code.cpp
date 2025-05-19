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
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "RollNo : " << rollno << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{

    Student s1("Pawan", 25, 11);

    Student s2 = s1;

    cout << "Student s1:" << endl;
    s1.display();

    cout << "Student s2:" << endl;
    s2.display();

    return 0;
}
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
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "RollNo : " << rollno << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{

    Student s1("Pawan", 25, 11);

    
    Student s2 = s1;


    cout << "Student s1:" << endl;
    s1.display();

    cout << "Student s2:" << endl;
    s2.display();

    return 0;
}
