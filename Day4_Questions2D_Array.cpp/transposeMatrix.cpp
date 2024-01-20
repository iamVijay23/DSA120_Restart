#include <iostream>
using namespace std;

// Choosing Lower Triangle  Matrix
void transPoseMatrix(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// Alternate Methods  (Choosing Uppar Triangle Matrix)
// void transPoseMatrix(int arr[][3], int row, int col)
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i; j <= col; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

int main()
{

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    int col = 3;

    // Outer Loop  -> row traverse
    cout << "Before Transpose " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Row" << i << "elements: "
             << "";
        // Inner Loop  -> column traversal
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    transPoseMatrix(arr, row, col);

    cout << "After  Transpose " << endl;
    // Outer Loop  -> row traverse
    for (int i = 0; i < row; i++)
    {
        cout << "Row" << i << "elements: "
             << "";
        // Inner Loop  -> column traversal
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}