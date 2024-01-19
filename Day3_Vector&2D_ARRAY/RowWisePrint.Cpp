#include <iostream>
using namespace std;

void rowWisePrint(int arr[][3], int row, int col)
{
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
int main()
{
    int arr[4][3] = {
        {11, 56, 65},
        {12, 33, 66},
        {14, 80, 67},
        {13, 78, 68}};

    int row = 4;
    int col = 3;

    rowWisePrint(arr, row, col);

    return 0;
}