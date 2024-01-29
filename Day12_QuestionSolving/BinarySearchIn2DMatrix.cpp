//  Write a program to implement the binary search algorithm for the 2D Matrix

#include <iostream>
using namespace std;

// Function to perform binary search in a 2D matrix
bool binarySearch2D(int matrix[][3], int target, int rows, int cols)
{
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high)
    {
        // Calculate mid point in 1D representation
        int mid = low + (high - low) / 2;

        // Convert mid point back to 2D indices
        int mid_row = mid / cols;
        int mid_col = mid % cols;

        // Check if the target is equal to the element at mid point
        if (matrix[mid_row][mid_col] == target)
        {
            cout << "Element found at position: (" << mid_row << ", " << mid_col << ")\n";
            return true;
        }

        // If target is greater, ignore the left half
        if (matrix[mid_row][mid_col] < target)
        {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else
        {
            high = mid - 1;
        }
    }

    // Element not found in the matrix
    cout << "Element not found.\n";
    return false;
}

int main()
{
    // Sample 2D matrix
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    // Get the number of rows and columns in the matrix
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Target element to search
    int target = 5;

    // Perform binary search
    bool found = binarySearch2D(arr, target, rows, cols);

    return 0;
}
