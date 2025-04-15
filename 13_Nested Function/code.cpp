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

// #include<iostream>

// using namespace std;

// int fact(int num){
//     // Base Condition

//     if(num==1){
//         return 1;
//     }

//     return num * fact(num - 1);
// }

// int main(){
//     int result = fact(6);
//     cout << "Fatorial : " << result << endl;
// }

// #include <iostream>
// using namespace std;

// int countDivisors(int num, int i, int count)
// {
//     if (i == 0)
//         return count;

//     if (num % i == 0)
//     {
//         count++;
//     }

//     return countDivisors(num, i - 1, count);
// }

// int main()
// {
//     int num = 5;
//     int count = countDivisors(num, num, 0);

//     if (count == 2)
//     {
//         cout << "Prime Number!" << endl;
//     }
//     else
//     {
//         cout << "Not Prime Number!" << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int primeFun(int num, int i, int count)
// {
// // base condition
//     if (i == 1)
//     {
//         return ++count;
//     }
//     else if (num % i == 0)
//     {
//         ++count;
//         cout << "Count : " << count << endl;
//     }

//     return primeFun(num, i - 1, count);
// }

// int main()
// {

//     int num = 5;
//     int count = primeFun(num, num, 0);
//     cout << "Final Count : " << count << endl;
//     if (count == 2)
//     {
//         cout << "Prime Number!" << endl;
//     }
//     else
//     {
//         cout << " Not Prime Number!" << endl;
//     }
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int secondLargest(int arr[], int n)
// {
//     int first = INT_MIN;
//     int second = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > first)
//         {
//             second = first;
//             first = arr[i];
//         }
//         else if (arr[i] > second && arr[i] != first)
//         {
//             second = arr[i];
//         }
//     }

//     // Optional: Handle case when no second largest element
//     if (second == INT_MIN)
//     {
//         cout << "Second largest element not found (all elements might be same)." << endl;
//         return -1;
//     }

//     return second;
// }

// int main()
// {
//     int n = 10;
//     int arr[n] = {12, 34, 566, 89, 34, 24, 21, 7, 989, 23};

//     int secondlargestElement = secondLargest(arr, n);
//     if (secondlargestElement != -1)
//     {
//         cout << "Second largest element : " << secondlargestElement << endl;
//     }
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int secondSmallest(int arr[], int n)
// {
//     int first = INT_MAX;
//     int second = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < first)
//         {
//             second = first;
//             first = arr[i];
//         }
//         else if (arr[i] < second && arr[i] != first)
//         {
//             second = arr[i];
//         }
//     }

//     return second;
// }

// int main()
// {
//     int n = 10;
//     int arr[n] = {12, 34, 566, 89, 34, 24, 21, 15, 989, 23};

//     int secondsmallest = secondSmallest(arr, n);
//     cout << "Second smallest element : " << secondsmallest << endl;
// }
