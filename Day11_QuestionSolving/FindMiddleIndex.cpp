/*

 ! Leetcode => 1991 Find the middle index in array


  Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).

A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].

If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.
 */

#include <iostream>
#include <vector>
using namespace std;

//  Optimized version of findIndex  Time Complexity  O(N) and space complexity O(1)
int findMiddleIndex(vector<int> &nums)
{
    int sum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    // Iterate through the array to find the pivot index
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum - nums[i];

        // Check if the current index is a pivot index
        if (leftSum == sum)
        {
            return i;
        }

        leftSum += nums[i];
    }

    // If no pivot index is found, return -1
    return -1;
}

// BruteForce Approach for the finding the middle index -> Time Complexity O(N) and Space Complexity  O(N)
int findMiddleIndex(vector<int> &nums)
{
    vector<int> sumLeft(nums.size(), 0);
    vector<int> sumRight(nums.size(), 0);

    for (int i = 1; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += nums[j];
        }
        sumLeft[i] = sum;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int sum = 0;
        for (int k = i + 1; k < nums.size(); k++)
        {
            sum += nums[k];
        }
        sumRight[i] = sum;
    }

    for (int j = 0; j < nums.size(); j++)
    {
        if (sumLeft[j] == sumRight[j])
        {
            return j;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int answer = findMiddleIndex(nums);

    cout << "Middle Index of array is -> " << answer;
}