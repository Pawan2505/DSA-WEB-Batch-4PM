// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;
//     int id;

//     void details()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Id : " << id << endl;
//     }
// };

// int main()
// {
//     Student s1;

//     s1.name = "Jay";
//     s1.age = 16;
//     s1.id = 12;

//     s1.details();
// }

// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;
//     int id;

//     // void details()
//     // {
//     //     cout << "Name : " << name << endl;
//     //     cout << "Age : " << age << endl;
//     //     cout << "Id : " << id << endl;
//     // }
// };

// int main()
// {
//     Student s1;

//     s1.name = "Jay";
//     s1.age = 16;
//     s1.id = 12;

//         cout << "Name : " << s1.name << endl;
//         cout << "Age : " << s1.age << endl;
//         cout << "Id : " << s1.id << endl;

//     // s1.details();
// }

// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;
//     int id;

// private:
//     void details()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Id : " << id << endl;
//     }
// };

// int main()
// {
//     Student s1;

//     s1.name = "Jay";
//     s1.age = 16;
//     s1.id = 12;
// // ok
//     cout << "Name : " << s1.name << endl;
//     cout << "Age : " << s1.age << endl;
//     cout << "Id : " << s1.id << endl;

//     // s1.details(); // not ok -> private -> details()
// }



// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     string name;
//     int age;
//     int id;

//     public : 

//     // setter method
//     void setdetails(string name, int age, int id)
//     {
//         this->name = name;
//         this->age = age;
//         this->id = id;
//     }

//     // getter method
//     void getDetails(){
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Id : " << id << endl;
//     }
// };

// int main()
// {
//     Student s1;

//     s1.setdetails("Harsha", 12, 1234);
//     s1.getDetails();
// }



// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     string name;
//     int age;
//     int id;

//     // setter method
//     void setdetails(string name, int age, int id)
//     {
//         this->name = name;
//         this->age = age;
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

// int main()
// {
//     Student s1;
//     // Private members are completely inaccessible outside the class, even with object.ClassName::member() syntax.
//     s1.Student::setdetails("Harsha", 12, 1234); // not ok
//     s1.Student::getDetails(); // not ok
// }


