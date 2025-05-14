// Call by value

#include<iostream>
using namespace std;

int data(int &x){
    cout << "x : " <<x<< endl;  // 10

    x = 100;
    cout << " data -> x : " << x << endl; // 100
}


int main(){
    int x = 10;

    data(x);

    cout << "x : " << x << endl;  // 100
}

// Call by reference

// #include<iostream>
// using namespace std;

// int data(int &x){
//     cout << "x : " << x << endl;  // 10
//     x = 45;
//     cout << "x : " <<x<< endl; //45

// }

// int main(){
//     int x = 10;

//     data(x);

//     cout << "x : " << x << endl; //45
// } 