//  Write a C++ program to print the n*n  matrix in the wave pattern
#include <iostream>
using namespace std;

void printWavePattern(int n, int *matrix)
{
    for (int col = 0; col < n; ++col)
    {
        // If the column is even, print from top to bottom
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; ++row)
            {
                cout << matrix[row * n + col] << " ";
            }
        }
        // If the column is odd, print from bottom to top
        else
        {
            for (int row = n - 1; row >= 0; --row)
            {
                cout << matrix[row * n + col] << " ";
            }
        }
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n * n; ++i)
    {
        cin >> matrix[i / n][i % n];
    }

    cout << "Wave Pattern for n x n matrix:" << endl;
    printWavePattern(n, &matrix[0][0]);

    return 0;
}
