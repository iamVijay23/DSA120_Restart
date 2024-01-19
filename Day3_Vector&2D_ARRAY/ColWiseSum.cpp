#include <iostream>
using namespace std;

void colWiseSum(int arr[][3], int row, int col)
{
    int sum = 0;
    int total_Sum = 0;
    // Outer Loop -> column traversal
    for (int i = 0; i < col; i++)
    {
        cout << "Column " << i << "-> ";

        // Inner loop -> Row Traversal
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum is :" << sum;
        total_Sum += sum;
        cout << endl;
    }

    cout << "Total Sum Is : " << total_Sum;
}

int main()
{
    int arr[4][3] = {
        {11, 56, 65},
        {12, 33, 66},
        {14, 80, 67},
        {13, 78, 68}};

    int row = 4;
    int col = 3;

    colWiseSum(arr, row, col);

    return 0;
}
