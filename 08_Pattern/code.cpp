// #include <iostream>
// using namespace std;

// int main()
// {
//     // row
//     for (int row = 1; row <= 4; row++)
//     {
//         // column
//         for (int col = 1; col <= 4; col++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{

    for (int row = 1; row <= 4; row++)
    {

        // space
        for (int space = 1; space <= row - 1; space++){
            cout << " ";
        }

         for (int star = 1; star <= 4; star++)
        {
            cout << "*";
         }

        cout << endl;
    }
    return 0;
}