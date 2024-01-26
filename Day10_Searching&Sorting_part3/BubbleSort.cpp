//  Bubble sort algorithm implementation (ascending Order )

//  Swap the adjecent element if needed till we get the element of Array is sorted

//  for reference ->https://www.programiz.com/dsa/bubble-sort

#include <iostream>
using namespace std;

//  Time Complexity -> o(n^2)
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)// although we can implement it using the i <size it will work also but for optimization we make sure that each iteration make the largest and smallest element is guaranteed to be in its correct position. i.e i<size-1 is done ;
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 8, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    bubbleSort(arr, size);
    cout << "\n\nSorted array in ascending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}