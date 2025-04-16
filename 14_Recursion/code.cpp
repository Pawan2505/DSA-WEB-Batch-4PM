// #include<iostream>
// using namespace std;

// int display(int arr[], int n){
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int n = 6;

//     int arr[n] = {12, 34, 56, 89, 3, 45};

//     display(arr,n);
// }

// sum of elements in an array

// #include <iostream>
// using namespace std;

// int sumElement(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main()
// {

//     int n = 6;

//     int arr[n] = {12, 34, 56, 89, 3, 45};

//     int sum = sumElement(arr, n);

//     cout << "Sum of all element in array : " << sum << endl;
// }

// Reverse an Array

// #include <iostream>
// using namespace std;

// int reverseArray(int *arr, int n)
// {

//     for (int i = n-1; i >0; i--)
//     {
//         cout << arr[i] << " ";
//     }

// }

// int main()
// {

//     int n = 6;

//     int arr[n] = {12, 34, 56, 89, 3, 45};

//     cout << "Original Array : ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     cout << "Reverse Array : ";

//     reverseArray(arr, n);
// }

// array

// searching ->
// 1> linear search -> key -> every element present im array -> compare
// 2> binary search

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key)
// {
//     bool isPresent = false;
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] == key)
//         {
//             cout << key << " key present at " << i << " index." << endl;
//             isPresent = true;
//         }
//     }

//     if (!isPresent)
//     {
//         cout << "Element does not exits!" << endl;
//     }
// }

// int main()
// {

//     int n = 10;
//     int key = 99;

//     int arr[n] = {12, 34, 56, 78, 2, 34, 565, 76, 78, 4};
//     linearSearch(arr, n, key);
// }

// Binary Search is a highly efficient searching algorithm that works on sorted arrays.

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//     }

// }

// int main()
// {

//     int n = 10;
//     int key = 80;
//     int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//     int ispresent = binarySearch(arr, n, key);

//     cout << key << " present at " << ispresent << " index." << endl;
// }