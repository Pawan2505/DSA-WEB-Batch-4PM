#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 5. Assignment Operator (+=, -=, *=, /=, %=)
    // ==========================================
    int vishal = 10;

    // vishal = vishal + 5;
    vishal += 5; // Equivalent to vishal = vishal + 5; (adds 5 to vishal)

    vishal -= 2;  // Equivalent to vishal = vishal - 2; (subtracts 2 from vishal)
    vishal *= 2;  // Equivalent to vishal = vishal * 2; (multiplies vishal by 2)
    vishal /= 13; // Equivalent to vishal = vishal / 13; (divides vishal by 13)
    vishal %= 2;  // Equivalent to vishal = vishal % 2; (calculates the remainder of vishal divided by 2)

    cout << "Total amount : " << vishal << endl; // Output the final result

    return 0;
}
