#include <iostream>
using namespace std;

void colWisePrint(int arr[][3], int row, int col)
{
    // Outer Loop -> column traversal
    for (int i = 0; i < col; i++)
    {
        cout << "Column " << i << " elements: ";

        // Inner loop -> Row Traversal
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
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

    colWisePrint(arr, row, col);

    return 0;
}
