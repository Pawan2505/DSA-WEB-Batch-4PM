// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;

//     void setDetails(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };

// int main()
// {
//     Student s[5];

//     s[0].setDetails("Harsha", 11);
//     s[1].setDetails("Vishal", 8);

//     s[0].getDetails();

//     cout << "*************************************" << endl;
//     s[1].getDetails();
// }




// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;

//     void setDetails(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };

// int main()
// {
//     Student *s1 = new Student();
    
//     s1->setDetails("Abhishek", 1);

//     s1->getDetails();
// }

#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int age;

    void setDetails(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void getDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student *s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i] = new Student();
    }

    s[0]->setDetails("JayeshRaj", 100);
    s[0]->getDetails();
    s[1]->setDetails("Vishal", 1000);
    s[1]->getDetails();

    for (int i = 0; i < 5; i++)
    {
        delete s[i];
    }


}