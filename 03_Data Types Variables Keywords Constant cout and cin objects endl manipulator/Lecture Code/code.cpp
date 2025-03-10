// #include<iostream>
// using namespace std;
// int main(){

//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     cout << "Pawan"<<endl;
//     cout << "Maurya"<<endl;
//     cout << "Hey "<<endl;
// }

// #include <iostream>
// // using namespace std;
// int main()
// {

//     // cin,cout,endl -> std
//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     std::cout << "Pawan" << std::endl;
//     std::cout << "Maurya" << std::endl;
//     std::cout << "Hey " << std::endl;
// }

// #include<iostream>

// int main(){
//     using namespace std;
//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     cout << "Pawan"<<endl;
//     cout << "Maurya"<<endl;
//     cout << "Hey "<<endl;
// }



// #include <iostream> // Include the iostream library for input/output

// // Use the entire std namespace globally in the program
// using namespace std;

// // Main function: entry point of the program
// int main()
// {

//     // Now, we can use cout, cin, and endl without the std:: prefix
//     string name;
//     int age;

//     // Ask for user's name and store it in 'name'
//     cout << "Enter your name: ";
//     cin >> name;

//     // Ask for user's age and store it in 'age'
//     cout << "Enter your age: ";
//     cin >> age;

//     // Output the information entered by the user
//     cout << "Hello, " << name << "!" << endl;
//     cout << "You are " << age << " years old." << endl;

//     return 0; // Return 0 to indicate successful execution
// }


// #include<iostream>
// using namespace std;

// int main(){
//     // declaration of variable => return_type variable_name;
    
//     string name = "Pawan";

//     cout << "Your name is : " << name << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // declaration of variable => return_type variable_name;

//     string name;

//     // insilisation
//     name = "Pawan";

//     cout << "Your name is : " << name << endl;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     // declaration of variable => return_type variable_name;

//     string name;

//     cout << "Please enter your name : ";
// user se input
//     // cin >> name;

//     getline(cin, name);

//     cout << "Your name is : " << name << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
   
//     string name = "Pawan Maurya";
//     cout << "Your name is : " << name << endl;

//     int num = 12;
//     cout << "Num = " << num << endl;

//     float num1 = 23.78;
//     cout << "Num1 = " << num1 << endl;

//     double num2 = 12.456;
//     cout << "Num2 = " << num2 << endl;

//     char ch = 'a';
//     cout << "ch = " << ch << endl;

//     bool ispresnt = false;
//     cout << "ispresnt = " << ispresnt << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // string name;
//     // cout << "Your name is : ";
//     // cin >> name;


//     // int num;
//     // cout << "Num = ";
//     // cin >> num;
   

//     // float num1;
//     // cout << "Num1 = ";
//     // cin >> num1;
  
//     // double num2;
//     // cout << "Num2 = ";
//     // cin >> num2;
    

//     // char ch;
//     // cout << "Ch = " << endl;
//     // cin >> ch;

//     // cout << "Your name is : " << name << endl;
//     // cout << "Num = " << num << endl;
//     // cout << "Num1 = " << num1 << endl;
//     // cout << "Num2 = " << num2 << endl;
//     // cout << "ch = " << ch << endl;

//     // bool ispresnt;
//     // cout << "ispresent = " << endl;
//     // cin >> ispresnt;

//     // cout << "ispresnt = " << ispresnt << endl;
// }



// #include <iostream>
// #include <typeinfo> 
// using namespace std;

// int main()
// {
//     bool istrue = true; 
//     int num = 10;      

//     // Output the size of the variables
//     cout << "Size of 'istrue': " << sizeof(istrue) << " bytes" << endl; // Size of bool
//     cout << "Size of 'num': " << sizeof(num) << " bytes" << endl;       // Size of int

//     // Output the name of the type using typeid
//     cout << "Type of 'istrue': " << typeid(istrue).name() << endl; // Name of the type of 'istrue'
//     cout << "Type of 'num': " << typeid(num).name() << endl;       // Name of the type of 'num'

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     cout << sizeof(int) << endl;  //4
//     cout << sizeof(float) << endl; // 4
//     cout << sizeof(double) << endl; //8
//     cout << sizeof(char) << endl; //1
//     cout << sizeof(string) << endl; // 24
//     cout << sizeof(bool) << endl; //1
// }

// variable -> C++ Identifiers


// Rules:

// The general rules for naming variables are:

// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case -sensitive(myVar and myvar are different variables)
//         Names cannot contain whitespaces
//     or special characters like !,
//     #, %, etc.Reserved words(like C++ keywords, such as int) cannot be used as names


// #include<iostream>
// using namespace std;

// int main(){

//     // rule 1:
//     // int 123num; // error: expected unqualified-id before '}' token -> not allowed

//     // int num12;  // allowed

//     // rule 2: white space not allowed

//     // string first name; // not allowed

//     // string first_name;  // allowed

//     // rule 3 : only two special character allowed -> _,$

//     // int _num;

//     // int num$;

//     // int @num;

//     // int num@;

//     // rule 4 :  case sensitive

//     // int num = 10;
//     // num = 50;
//     // int Num = 20;

//     // cout << "num = " << num << endl;
//     // cout << "Num = " << Num << endl;

//     // rule 5 : https://www.geeksforgeeks.org/cpp-keywords/

//     // int cout = 34;  // not ok
//     // cout << cout << endl;

//     // int inline = 20;

//     // cout << inline << endl;

//     // rule 6:  short or long -> meaningful

//     // int num;
//     // int number;


// }


//  Constant Variable -> not change value -> not reinisilization -> same line me value insilisation where you declared const variable.

// #include<iostream>
// using namespace std;
// int main(){
//     // int a = 10;

//     // a = 20;
//     // cout << a << endl;

//     // int x;

//     // x = 100;

//     // cout << x << endl;

// //    const int num = 50;

// //    num = 500; // error: assignment of read-only variable 'num'
// //    cout << num << endl;

//     // const int num1; // if you declared only variable -> error: uninitialized const 'num1'

// //    const int num2;

//     //    num2 = 400; // error: uninitialized const 'num2' -> same line me declaration and insilisation krna hoga.


// }


// micro -> constant variable declaration -> do not required datatype to declared micro variable -> #define


// #include<iostream>
// using namespace std;
// #define PI 3.14  // global variable

// int main(){

//     // PI = 500; // 'PI' was not declared in this scope
//     cout << "PI : " << PI << endl;
// }



// local and global variable

// ek scope k andar ek variable ko c++ me ek baar hi declared kr skte ho -> but age scope different ho to same variable ko ab multiple time declared kr skte ho.

// local variable > global variable

// #include<iostream>
// using namespace std;

// int num = 10000;
// int main(){

//     int num = 10; // global variable

//     {
//         int num = 20; // local variable

//         cout << " local variable ( num ) : " << num << endl; //20
//     }
//     cout << "global variable ( num ) : " << num << endl; //10

//     cout << "Outer of main ->  varible (num) : " << ::num << endl;
// }


// namespace -> same variable name declared -> multiple time 
// with the help of namespace keyword -> declared same name variable -> multiple time -> solve conflict


// #include<iostream>
// using namespace std;

// namespace na{
//     int num = 10;
// }

// namespace nb
// {
//     int num = 46;
// }

// namespace nc
// {
//     int num = 50;
// }

// int main(){

//     cout << "na : " << na::num + 1 << endl;
//     cout << "nb : " << nb::num << endl;
//     cout << "nc : " << nc::num << endl;
// }

// https: // docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0

// https://docs.google.com/document/d/10NIshP7B5OQYyj-4cA0h8BZXG7lI8TTikSXPmAUPbro/edit?tab=t.0

// https://docs.google.com/document/d/1vKs9-xy7p1kwBWIuwGG07UpYmBLQ99c27sBUQttPkIU/edit?tab=t.0