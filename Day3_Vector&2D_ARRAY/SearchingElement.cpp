#include <iostream>
using namespace std;

int search2D(int arr[][4], int rows, int cols, int x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == x)
            {
                return i * cols + j; // return the index of the element
            }
        }
    }
    return -1; // return -1 if the element is not found
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int x = 7;
    int result = search2D(arr, 3, 4, x);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
