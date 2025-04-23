// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;

//     int *ptr = &x;

//     cout << "ptr : " << ptr << endl;
//     cout << "&x : " << &x << endl;

//     cout << "*ptr : " << *ptr << endl;
//     cout << "x : " << x << endl;

//     cout << "&ptr : " << &ptr << endl;

//     int **ptr1 = &ptr;

//     cout << "**ptr1 : " << **ptr1 << endl;
// }




// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     cout << "x : " << x << endl;
//     int *ptr = &x;
//     *ptr = 1000;

//     cout << "x : " << x << endl;
//     cout << "*ptr : " << *ptr << endl;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 6;
//     int arr[n] = {12, 34, 56, 78, 90, 67};


//     int *ptr = arr;

//     // cout << "*ptr : " << *ptr << endl;

//     for (int i = 0; i < n; i++){
//         cout << *(ptr + i) << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << (ptr + i) << " ";
//     }
// }