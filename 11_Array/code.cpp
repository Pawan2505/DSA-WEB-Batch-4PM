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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter length of array : ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++){
//         cout << "Please enter element at " << i << " index :";
//         cin >> arr[i];
//     }

//     cout << endl;

//     cout << "Array : " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }

// #include <iostream>
// #include<climits>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

//     int maxValue = INT_MIN;
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] > maxValue)
//         {
//             maxValue = arr[i];
//         }
//     }

//     cout << "Max element present in array : " << maxValue << endl;

//     cout << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

//     int minValue = INT_MAX;
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] < minValue)
//         {
//             minValue = arr[i];
//         }
//     }

//     cout << "Min element present in array : " << minValue << endl;

//     cout << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

//     int sum = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         sum += arr[i];
//     }

//     cout << "Sum of all elements of array : " << sum << endl;

//     cout << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};
//     cout << "Original Array : ";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int key = 67;
//     int updated = 66;

//     for (int i = 0; i < 8; i++)
//     {
//        if(key == arr[i]){
//            arr[i] = updated;
//            break;
//        }
//     }

//     cout << "Updated Array : ";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {12, 34, 56, 67, 90};

//     int position = 2;

//     for (int i = position; i < 5; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     cout << "Array : ";

//     for (int i = 0; i < 4; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {12, 34, 56, 67, 90,223,345,56};

//     // for each loop

//     for (int harsha : arr)
//     {
//         cout << harsha << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row = 3;
//     int col = 4;

//     int arr[row][col] = {
//             {12, 34, 56, 78},
//             { 9, 23, 45, 67},
//             {899, 0, 23, 4}
//         };

//     arr[2][1] = 100;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 4;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter data at " << i << " row and " << j << " col :";
            cin >> arr[i][j];
        }

    }

    cout << "Array : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}