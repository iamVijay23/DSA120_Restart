#include <iostream>
#include <vector>
using namespace std;

void generateSpiralMatrix(const vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        // Traverse from left to right
        for (int i = left; i <= right; ++i)
        {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Traverse from right to left
        if (top <= bottom)
        { // To avoid duplicate printing in odd-sized matrices
            for (int i = right; i >= left; --i)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right)
        { // To avoid duplicate printing in odd-sized matrices
            for (int i = bottom; i >= top; --i)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
}


int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Spiral Matrix:" << endl;
    generateSpiralMatrix(matrix);

    return 0;
}
