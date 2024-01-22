//  Given a matrix containing the binary numbers only i.e 0 and 1
// Return an array in which you have to return the row having maximum sum and the row number
#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN
using namespace std;

vector<int> rowWithMaximumSum(int matrix[][4], int rows, int cols)
{
    vector<int> answer;
    int rowCount = -1; // Initialize to -1, indicating no row with 1s found yet
    int maxOne = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxOne)
        {
            maxOne = count;
            rowCount = i;
        }
    }

    answer.push_back(rowCount);
    answer.push_back(maxOne);

    return answer;
}

int main()
{
    int matrix[4][4] = {{1, 0, 0, 1},
                        {0, 0, 0, 0},
                        {1, 1, 1, 0},
                        {1, 1, 1, 1}};

    int rows = 4;
    int cols = 4;

    vector<int> answer = rowWithMaximumSum(matrix, rows, cols);

    // Displaying the result
    cout << "Row with maximum sum of 1s: " << answer[0] << endl;
    cout << "Number of 1s in that row: " << answer[1] << endl;

    return 0;
}
