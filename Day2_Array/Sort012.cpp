// given an array containing 0,1,2 in the array sort the arry
// without using the sort function

#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    int low = 0;         // pointer for 0
    int high = size - 1; // pointer for 2
    int mid = 0;         // pointer for 1

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 1, 0, 2, 1, 0, 2, 1};
    int size = 10;

    sort012(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
