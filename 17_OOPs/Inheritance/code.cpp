#include <iostream>
using namespace std;

class Customer
{
public:
    string username;
    int age;

    Customer(string username, int age)
    {
        this->username = username;
        this->age = age;
    }
    void display()
    {
        cout << "UserName : " << username << endl;
        cout << "Age : " << age << endl;
    }
};

class Harsha : public Customer
{
public:
    Harsha(string username, int age) : Customer(username, age)
    {
    }

    void detalis()
    {
        cout << "UserName : " << username << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Harsha h1("Pawan", 25);
    h1.detalis();
    h1.display();
}

// url : https://medium.com/@pawan2505/the-four-pillars-of-c-object-oriented-programming-oop-9435cf2844c8