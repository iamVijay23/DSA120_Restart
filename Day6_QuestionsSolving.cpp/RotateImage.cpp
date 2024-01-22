// Leetcode -> 48. Rotate Image
// Rotate 2D Array by 90 Degree

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


//  Time Complexity  -> O(N^2)
void rotate90Degree(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    // Example 2D array (3x3 matrix)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    rotate90Degree(matrix);

    cout << "\nMatrix after rotating 90 degrees:" << endl;
    for (const auto &row : matrix)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
