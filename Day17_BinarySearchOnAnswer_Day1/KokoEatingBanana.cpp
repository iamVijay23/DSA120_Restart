#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//  using linear search
int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    int n = v.size();
    // find the maximum:
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly)
{
    int totalH = 0;
    int n = v.size();
    // find total hours:
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananasUsingLinearSearch(vector<int> v, int h)
{
    // Find the maximum number:
    int maxi = findMax(v);

    // Find the minimum value of k:
    for (int i = 1; i <= maxi; i++)
    {
        int reqTime = calculateTotalHours(v, i);
        if (reqTime <= h)
        {
            return i;
        }
    }

    // dummy return statement
    return maxi;
}

//  Using Binary Search Method Time Complexity -> O(N)* (Log(maxElement of Array ))
int maxElement(vector<int> &nums)
{
    int maxAnswer = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxAnswer = max(maxAnswer, nums[i]);
    }
    return maxAnswer;
}

long long hourlyEatingRate(vector<int> &nums, int hour)
{
    long long int totalTime = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        totalTime += ceil((double)nums[i] / (double)hour);
    }
    return totalTime;
}
int minimumRateToEatBananasUsingBinarySearch(vector<int> &piles, int h)
{
    long long int start = 1;
    long long int end = maxElement(piles);
    long long int ans = end; // last element can give the minimum time
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int totalTime = hourlyEatingRate(piles, mid);

        // Update answer if the current speed allows all bananas to be eaten within h hours
        if (totalTime <= h)
        {
            ans = min(ans, mid);
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananasUsingLinearSearch(v, h);
    cout << "Koko should eat atleast using linear search " << ans << " bananas/hr.\n";

    int ans1 =minimumRateToEatBananasUsingBinarySearch(v, h);
    cout << "Koko should eat atleast using binary search " << ans1 << " bananas/hr.\n";
    return 0;
}