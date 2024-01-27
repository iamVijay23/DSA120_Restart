//  Leetcode 33  Search in Rotated Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // Corner Case for single element in the array

        if (start == end)
        {
            return start; // we can return mid or end also as there is single element
        }

        // mid + 1 < size &&
        if (mid + 1 < size && arr[mid] > arr[mid + 1]) // yeha condition mai galti kar sakte  h please pay more attention ... mid+1 check karna ki size ke bahar na jaaye
        {
            return mid; // that will be our pivot index
        }
        // mid - 1 >= 0 &&
        else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
        // yeha condition mai galti kar sakte  h please pay more attention ... mid-1 check karna ki  negative index na de
        {
            return mid - 1; // that will be our pivot index
        }

        else if (arr[start] > arr[mid])
        {
            end = mid - 1; // answer will be on left side;
        }

        else
        {
            start = mid + 1; // answer will be on right side
        }

        mid = start + (end - start) / 2;
    }
    return -1; // if there is no pivot  index
}

int binarySearch(vector<int> &arr, int start, int end, int target)
{

    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            return mid;
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

    return -1;
}

int searchInRotatedSorted(vector<int> &nums, int target)
{
    int pivotIndex = findPivotIndex(nums);
    int ans = -1;

    if (target >= nums[0] && target <= nums[pivotIndex]) // target lies on line A
    {
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target); // target lies on line B
    }

    return ans;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 8, 0, 1, 2};
    int target;
    cin >> target;
    int answer = searchInRotatedSorted(nums, target);
    cout << "Target Element is Present at index  - > " << answer;
}