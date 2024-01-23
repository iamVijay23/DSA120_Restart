
// Write a Program to move all the negative element to the left of the array and make it in-place
// Order of element doesn't matter 

#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

// Time Complexity -> O(N) Space Complexity -> O(1)
void moveNegativesToLeft(vector<int> &arr)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            // Both elements are negative, move to the next pair
            ++left;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            // Swap the elements and move to the next pair
            swap(arr[left], arr[right]);
            ++left;
            --right;
        }
        else if (arr[left] < 0 && arr[right] > 0)
        {
            // Move to the next pair
            ++left;
            --right;
        }
        else
        {
            // Both elements are positive, move to the next pair
            --right;
        }
    }
}
void moveNegativesToLeftUsingSorting(vector<int> &arr)
{

    sort(arr.begin(), arr.end());
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, -2, 3, -4, 5, -6, 7, -8};

    cout << "Original Array: ";
    printArray(arr);

    moveNegativesToLeft(arr);

    cout << "Array after moving negatives to the left: ";
    printArray(arr);

    moveNegativesToLeftUsingSorting(arr);
    cout << "Array after sorting operation moving negatives to the left: ";
    printArray(arr);

    return 0;
}
