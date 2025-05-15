// Memory for data members of a class is allocated only after creating an object of that class — not just by defining the class.

// Memory for non-static data members is allocated when you create an object of the class.

// sizeof(Student) tells how much memory one object of class Student would occupy if an object were created. It does not depend on whether an object is actually created or not.

// #include <iostream>    c
// using namespace std;

// class Student
// {

// private:
//     string name;
//     static int age;
//     int id;

// public:
//     // setter method
//     void setdetails(string name , int id)
//     {
//         this->name = name;
//         this->id = id;
//     }

//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Id : " << id << endl;
//     }
// };

// int Student::age = 23;

// int main()
// {
//     cout << "Size of Student Class : " << sizeof(Student) << endl;

//     Student s1;

//     s1.setdetails("Jayesh", 10);

//     s1.getDetails();
// }

// #include<iostream>

// using namespace std;

// class Student{
//     private :
//         string name;
//         int age;

//     public :

//     void setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
//     void display(){
//         cout << "Name : " << this->name << endl;
//         cout << "Age : " << this->age << endl;
//     }
// };

// int main(){
//     Student s1,s2;

//     s1.setDetails("Vishal", 20);
//     s2.setDetails("Harsha", 16);

//     s1.display();
//     s2.display();
// }

//  Constructor :-

#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int salary;

public:
    // Parameterless constructor
    Student()
    {
        cout << "Deafult constructor called...";
    }

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Student(string name, int age,int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
    }

    void details(){
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Salary : " << this->salary << endl;
    }
};

int main()
{
    Student s1("Abhishek", 21);

    s1.display();

    Student s2("Pawan", 25,999);

    s2.details();
}