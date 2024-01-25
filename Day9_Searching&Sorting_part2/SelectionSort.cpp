#include <iostream>
using namespace std;

/*
 !! Time Complexity:

Worst Case: O(n^2)
Average Case: O(n^2)
Best Case: O(n^2)
Selection sort has a time complexity of O(n^2) because, in the worst case, it needs to perform n*(n-1)/2 comparisons and n swaps.

!! Space Complexity:

O(1) - Selection sort is an in-place sorting algorithm, meaning it doesn't require additional memory space proportional to the input size. It only uses a constant amount of extra memory for storing temporary variables.
 *
 */
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    selectionSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
