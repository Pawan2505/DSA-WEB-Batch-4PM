#include <iostream>
using namespace std;

class Student
{
public:
    string *name; 
    int age;
    int rollno;

    // Constructor
    Student(string name, int age, int rollno)
    {
        this->name = new string(name); 
        this->age = age;
        this->rollno = rollno;
    }

   
    Student(const Student &other)
    {
        this->name = new string(*other.name); // deep copy string
        this->age = other.age;
        this->rollno = other.rollno;
    }

    
    ~Student()
    {
        delete name;
    }

    void display()
    {
        cout << "Name   : " << *name << endl;
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
