#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int count = 0;

    for (int i = 1; i <= num; i++){
        if(num%i == 0){
            count++;
        }
    }

    if(num<2){
        cout << "Please enter valid number." << endl;
    }else if(count == 2){
        cout << num << " is prime number." << endl;
    }else{
        cout << num << " is not prime number." << endl;
    }
}