//  Leetcode  -> 532 k - different Unique  pairs of array  (Try other approach also)

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int binarySearch(vector<int> &arr, int start, int target)
{

    int end = arr.size() - 1;
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

//  Time Complexity -> O(N^2) and space Complexity -> O(N)
int findPairsBruteForce(vector<int> &nums, int k)
{
    set<pair<int, int>> ans;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int diff = abs(nums[j] - nums[i]);
            if (diff == k)
            {
                ans.insert({nums[i], nums[j]});
            }
        }
    }
    return ans.size();
}

 // Time Complexity -> O(n logn) space complexity -> O(1)
int findPairsWithoutSet(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    int i = 0; // to expand\n
    int j = 1; // to shrink\n
    int count = 0;
    while (j < nums.size())
    {
        if (i == 0 && nums[j] - nums[i] == k)
        { // since i-1 can give run time error when
            // i=0\n
            count++;
            i++;
            j++;
        }
        else
        {
            if (nums[j] - nums[i] == k && nums[i] != nums[i - 1])
            {
                count++; // it will skip repeating elements\n
                i++;
                j++;
            }
            else if (nums[j] - nums[i] < k)
            {
                j++;
                // difference is smaller than k, hence expand\n
            }
            else
            {
                i++; // difference is bigger than k, hence shrink\n
            }
            if (i == j)
                j++;
        }
    }
    return count;
}

// Time Complexity -> O(n logn) space complexity -> O(N)
// 2 Pointer Method  and sort + set
int findPairsWithSet(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());

    set<pair<int, int>> ans;

    int j = 1;
    int i = 0;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }

        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }

        if (i == j)
        {
            j++;
        }
    }
    return ans.size();
}

// Time Complexity -> O(n logn) space complexity -> O(N)

int findPairsOptimized(vector<int> &nums, int k)
{

    //  3  Method -> sort + binary search + set

    sort(nums.begin(), nums.end());

    set<pair<int, int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }

    return ans.size();
}

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int k;
    cout << "Diffrence->"
         << "";
    cin >> k;
    int answer = findPairsOptimized(nums, k);

    cout << "Different pairs found: " << answer << endl;
}