#include<iostream>
using namespace std;

int main(){

    int start;

    cout << "Enter starting number :";
    cin >> start;

    int end;
    cout << "Enter last number : ";
    cin >> end;

    for (int i = start; i <= end; i++){
        cout << i << " ";
    }
}