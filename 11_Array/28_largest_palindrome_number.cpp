#include <iostream>
#include <climits>
using namespace std;

// Check if number is a palindrome
bool isPalindrome(int num)
{
    int temp = num, reverse = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    return reverse == num;
}

int main()
{
    int arr[] = {121, 333, 545, 78, 999, 45645, 123321, 7635};
    int largestPalindrome = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (isPalindrome(arr[i]) && arr[i] > largestPalindrome)
        {
            largestPalindrome = arr[i];
        }
    }

    cout << "Largest Palindrome element: " << largestPalindrome << endl;
}
