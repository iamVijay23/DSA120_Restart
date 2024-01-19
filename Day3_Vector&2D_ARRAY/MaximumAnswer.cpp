#include <iostream>
#include <limits.h>
using namespace std;

int maximumIn2D(int arr[][4], int rows, int cols, int x)
{
    int maximum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maximum)
            {
                maximum = arr[i][j];
            }
        }
    }
    return maximum;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int x = 7;
    int maximumAnswer = maximumIn2D(arr, 3, 4, x);
    cout << "Maxium Number in 2D array is -> " << maximumAnswer;
}
