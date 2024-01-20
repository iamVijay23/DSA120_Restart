// create  a program for the multiplication of matrix in c++


#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

// Function to input a matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE],
                      int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        cout << "Matrix multiplication not possible. Invalid dimensions." << endl;
        return;
    }

    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the dimensions of the first matrix:" << endl;
    cout << "Number of rows: ";
    cin >> rows1;
    cout << "Number of columns: ";
    cin >> cols1;

    inputMatrix(mat1, rows1, cols1);

    cout << "Enter the dimensions of the second matrix:" << endl;
    cout << "Number of rows: ";
    cin >> rows2;
    cout << "Number of columns: ";
    cin >> cols2;

    inputMatrix(mat2, rows2, cols2);

    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    cout << "Result of matrix multiplication:" << endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}
