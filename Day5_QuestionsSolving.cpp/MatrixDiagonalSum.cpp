/*

Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and
all the elements on the secondary diagonal that are not part of the primary diagonal.


*/

#include <iostream >
using namespace std;

//  Brute Force Approach   O(N^2)
int diagonalSum(int mat[][3], int row, int col)
{
    int firstSum = 0;
    int secondSum = 0;

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                firstSum += mat[i][j];

                mat[i][j] = 0;
            }
        }
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == col - 1)
            {
                secondSum += mat[i][j];
            }
        }
    }

    return firstSum + secondSum;
}

// // Optimal Approach  Tc -> O(N) SC => O(1)
// int diagonalSum(int mat[][3], int row, int col)
// {

//     // side length
//     int n = row;

//     // mid point index
//     int mid = n / 2;

//     // summation of diagonal element
//     int summation = 0;

//     for (int i = 0; i < n; i++)
//     {

//         // primary diagonal
//         summation += mat[i][i];

//         // secondary diagonal
//         summation += mat[n - 1 - i][i];
//     }

//     if (n % 2 == 1)
//     {

//         // remove center element (repeated) on odd side-length case
//         summation -= mat[mid][mid];
//     }

//     return summation;
// }

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    int col = 3;

    int answer = diagonalSum(arr, row, col);

    cout << "total sum is:" << answer;
}
