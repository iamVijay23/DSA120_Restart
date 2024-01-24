//  Write a program to implement the Binary Search Algorithm for ond dimensional array

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

// Time Complexity  -> O (log n)
bool binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter Element to search: ";
    cin >> target;

    bool answer = binarySearch(arr, size, target);

    if (answer)
        cout << "Target Element is Present in Array";
    else
        cout << "Target Element is Not Present in Array";

    return 0;
}
