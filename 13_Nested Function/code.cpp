// #include<iostream>
// using namespace std;
// // function declaration
// int add();
// int main()
// {
//     // function call
//     add();
// }

// // function definition
// int add(){
//     int x = 10;
//     int y = 30;

//     cout << "Sum : " << x + y << endl;
// }

// nested function

// #include <iostream>
// using namespace std;

// int calc(int x, int y)
// {
//     cout << "Outer Function called..." << endl;

//     int product = [x, y]()
//     {
//         cout << "Inner Function called..." << endl;
//         cout << "Product : " << x * y << endl;
//     };

//     product(); // Lambda function call
// }

// int main()
// {
//     // product();  // not ok
//     calc(2, 3);
// }

// Recurrsion function

// #include <iostream>
// using namespace std;

// int main()
// {
//     int product = 1;

//     for (int i = 1; i <= 5; i++)
//     {
//         product *= i;
//     }

//     cout << product << endl;
// }



#include<iostream>

using namespace std;

int fact(int num){
    // Base Condition

    if(num==1){
        return 1;
    }

    return num * fact(num - 1);
}

int main(){
    int result = fact(6);
    cout << "Fatorial : " << result << endl;
}