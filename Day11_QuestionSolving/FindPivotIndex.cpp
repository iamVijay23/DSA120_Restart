
/*
 !! Leetcode => 724.Find Pivot Index


Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

*/

#include <iostream>
#include <vector>
using namespace std;

//  Optimized version of findIndex  Time Complexity  O(N) and space complexity O(1)
// int findPivotIndex(vector<int> &nums)
// {
//     int sum = 0;
//     int leftSum = 0;

//     // Calculate the total sum of the array
//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];
//     }

//     // Iterate through the array to find the pivot index
//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum = sum - nums[i];

//         // Check if the current index is a pivot index
//         if (leftSum == sum)
//         {
//             return i;
//         }

//         leftSum += nums[i];
//     }

//     // If no pivot index is found, return -1
//     return -1;
// }

// BruteForce Approach for the finding the Pivot index -> Time Complexity O(N) and Space Complexity  O(N)

int findPivotIndex(vector<int> &nums)
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
    int answer = findPivotIndex(nums);

    cout << "Pivot Index of array is -> " << answer;
}