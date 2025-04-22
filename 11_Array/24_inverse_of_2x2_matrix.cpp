#include <iostream>
using namespace std;

int main()
{
    float matrix[2][2], inverse[2][2];
    float det;

    cout << "Enter elements of 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix[i][j];

    // Determinant of 2x2 matrix
    det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if (det == 0)
    {
        cout << "Matrix is not invertible (determinant is 0).\n";
        return 0;
    }

    // Inverse calculation formula
    inverse[0][0] = matrix[1][1] / det;
    inverse[0][1] = -matrix[0][1] / det;
    inverse[1][0] = -matrix[1][0] / det;
    inverse[1][1] = matrix[0][0] / det;

    cout << "Inverse matrix is:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << inverse[i][j] << " ";
        cout << endl;
    }
}
