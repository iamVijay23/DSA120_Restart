// Find last occuerence of a number in a sorted array.

#include <iostream>
using namespace std;

// Time Complexity  -> O (log n)
int findLastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int answerIndex = -1;
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            answerIndex = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return answerIndex;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 60, 60, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter Element to search last occurence: ";
    cin >> target;

    int answerIndex = findLastOccurence(arr, size, target);
 
    if (answerIndex>0)
        cout << "Target Element is Present in Array at index -> " << answerIndex;
    else
        cout << "Target Element is Not Present in Array";

    return 0;
}
