#include <iostream>
#include <limits.h>
using namespace std;

int minimumIn2D(int arr[][4], int rows, int cols)
{
    int minimum = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < minimum)
            {
                minimum = arr[i][j];
            }
        }
    }
    return minimum;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int x = 7;
    int minimumAnswer = minimumIn2D(arr, 3, 4);
    cout << "Maxium Number in 2D array is -> " << minimumAnswer;
}
