// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     int arr[n];

//     arr[0] = 10;
//     arr[1] = 22;
//     arr[2] = 23;
//     arr[3] = 90;
//     arr[4] = 50;

//     cout << "arr[0] : " << arr[0] << endl;

//     cout << "arr[1] : " << arr[1] << endl;

//     cout << "arr[2] : " << arr[2] << endl;

//     cout << "arr[3] : " << arr[3] << endl;

//     cout << "arr[4] : " << arr[4] << endl;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     int arr[n];

//     arr[0] = 10;
//     arr[1] = 22;
//     arr[2] = 23;
//     arr[3] = 90;
//     arr[4] = 50;

//     cout << "Array : ";

//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;

//     int arr[n] = {12,34,56,45,98};

//     cout <<"Array : ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {12, 34, 56, 45, 98,23};

//     int length = sizeof(arr)/sizeof(arr[0]);

//     cout << "Array : "<<endl;

//     for (int i = 0; i < length; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Please enter element at " << i << " index :";
        cin >> arr[i];
    }

    cout << endl;

    cout << "Array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}