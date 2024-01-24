//  Given an integer array with a targeted value you have to
//   find the Total occurrence of this number in the given array.
// If there is no occurrence return -1;

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

int findFirstOccurence(int arr[], int size, int target)
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
            end = mid - 1;
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

int totalOccurrence(int arr[], int size, int target)
{
    int firstOccurence = findFirstOccurence(arr, size, target);
    int lastOccurence = findLastOccurence(arr, size, target);

    return (lastOccurence - firstOccurence) + 1;
    // yeha galti hoti hai to be careful  +1 isiliye kiya h lets suppose element 1 times hi present ho to diffrence niklne se 0 aayega so isse bachne ke liye +1 kiya h
}
int main()
{
    int arr[] = {10, 20, 30, 40, 60, 60, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter Element to search last occurence: ";
    cin >> target;

    int total = totalOccurrence(arr, size, target);

    cout << "Target Element occur -> " << total;
    return 0;
}
