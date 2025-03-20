// #include<iostream>
// using namespace std;

// int main(){

//     int start;

//     cout << "Enter starting number :";
//     cin >> start;

//     int end;
//     cout << "Enter last number : ";
//     cin >> end;

//     while(start <= end){
//         cout << start << " ";
//         start++;
//     }
// }

// 14523

// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     cout << "Enter Number : ";
//     cin >> num;

//     int count = 0;

//     while (num > 0)
//     {
//         num = num / 10;
//         count++;
//     }

//     cout << "Number of digit in number : " << count << endl;
// }

// 14523

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter Number : ";
    cin >> num;

    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;

        sum += digit;
        num = num / 10;
    
    }

    cout << "sum of digit in number : " << sum << endl;
}