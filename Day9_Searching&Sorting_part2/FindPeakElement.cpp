//  Find a peak element from the array / pean index in  mountain Array
/*
 -> Peak element is the element that is greater element from its previous element and its next element.

 -> {10, 20 , 30 , 40, 50 , 90, 60, 70, 80 }

 output:  index 5 = 90 is the peak element

*/

#include <iostream>
using namespace std;

int peakElementUsingLinearSearch(int arr[], int size)
{
    // this loop will run for size-2 element
    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            return i;
        }
    }
    //  if the element is not found till the  loop ends it will return the last index
    return size - 1;
}

int peakElementUsingBinarySearch(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 90, 70, 80};

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = peakElementUsingLinearSearch(arr, size);

    cout << "Peak Element is present at index => " << index << endl;

    int peakIndex = peakElementUsingBinarySearch(arr, size);

    cout << "Peak Element is present at index => " << peakIndex;
}