//  Search the Insert Position Of element In the Array

#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;

// Linear search implementation Time Complexity O(N)
int linearSearchInsert(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] >= target)
        {
            return i; // Return the index where target should be inserted
        }
    }
    return nums.size(); // If target is greater than all elements, insert at the end
}

// Binary search implementation Time Complexity  O(Log N)
int binarySearchInsert(vector<int> &nums, int target)
{

    int result = -1;
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] >= target)
        {
            result = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return result != -1 ? result : nums.size();
}

//  Using STL functions
int searchInsertUsingSTL(vector<int> &nums, int target)
{

    auto result = std::lower_bound(nums.begin(), nums.end(), target);
    return distance(nums.begin(), result);
}

int main()
{
    // Example usage
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    // Linear search
    int linearResult = linearSearchInsert(nums, target);
    cout << "Linear Search Result: " << linearResult << endl;

    // Binary search
    int binaryResult = binarySearchInsert(nums, target);
    cout << "Binary Search Result: " << binaryResult << endl;

    int stlResult = searchInsertUsingSTL(nums, target);
    cout << "STL Search Result: " << stlResult << endl;
    return 0;
}
