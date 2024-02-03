/*
2089. Find Target Indices After Sorting Array

You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.


Example 1:

Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.


*/

#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> indices;

    // Iterate through the original array to find target indices
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == target)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

vector<int> ans; // to store answers
vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end()); // sorting arrays initially
    int start = 0, end = nums.size() - 1;
    binary(nums, start, end, target); // calling binary search on whole array
    return ans;
}

void binary(vector<int> nums, int start, int end, int target)
{
    if (start > end) // if array can't be divided into subarrays anymore
        return;

    int mid = start + (end - start) / 2; // declaring mid element
    if (nums[mid] == target)
    { // when target is found, push it into ans and call binary on each halved subarrays
        binary(nums, start, mid - 1, target);
        ans.push_back(mid);
        binary(nums, mid + 1, end, target);
    }
    else if (nums[mid] > target) // calling binary on lower half of array
        binary(nums, start, mid - 1, target);
    else // calling binary on upper half of array
        binary(nums, mid + 1, end, target);
}
int main()
{

    // Sample input
    vector<int> nums = {4, 2, 7, 1, 2, 5, 2};
    int target = 2;

    // Get target indices
    vector<int> result = targetIndices(nums, target);

    // Display the result
    cout << "Target Indices: ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
