//  Implement the Insertion sort algorithm  in ascending order 


//  Bubble sort algorithm implementation (ascending Order )

//  Swap the adjecent element if needed till we get the element of Array is sorted

//  for reference ->https://www.programiz.com/dsa/

#include <iostream>
using namespace std;

//  Time Complexity -> o(n^2)
#include <iostream>
using namespace std;

// Insertion Sort Algorithm
// Time Complexity: O(n^2)
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
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

    insertionSort(arr, size);

    cout << "\n\nSorted array in ascending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

}