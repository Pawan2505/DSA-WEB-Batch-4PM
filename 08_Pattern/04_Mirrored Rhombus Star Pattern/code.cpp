#include <iostream>
using namespace std;

int main()
{
    int n = 4;   
    int rows = 4;
    
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

       
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
