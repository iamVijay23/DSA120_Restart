// Given a matrix of size n*n  you have to print the secondary diagonal of that matrix

#include <iostream>
using namespace std;

void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == col - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    int col = 3;

    print(arr, row, col);
}