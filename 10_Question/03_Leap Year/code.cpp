#include<iostream>
using namespace std;

int main(){

    char ch = 'y';

    while (ch == 'y' || ch== 'Y')
    {
        int year;
        cout << "Enter Year : ";
        cin >> year;

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout << year << " is Leap year!" << endl;
        }
        else
        {
            cout << year << " is not Leap year!" << endl;
        }

        cout << "Are you want to check next data (y/n) ";
        cin >> ch;
    }
   
}