#include <iostream>
#include <vector>
using namespace std;

// // Optimal Approach-> Single pass  TC=>O(N)  Space Complexity => O(1)

// vector<int> rearrangeArray(vector<int> &nums)
// {

//     int n = nums.size();

//     // Define array for storing the ans separately.
//     vector<int> ans(n, 0);

//     // positive elements start from 0 and negative from 1.
//     int posIndex = 0, negIndex = 1;
//     for (int i = 0; i < n; i++)
//     {

//         // Fill negative elements in odd indices and inc by 2.
//         if (nums[i] < 0)
//         {
//             ans[negIndex] = nums[i];
//             negIndex += 2;
//         }

//         // Fill positive elements in even indices and inc by 2.
//         else
//         {
//             ans[posIndex] = nums[i];
//             posIndex += 2;
//         }
//     }

//     return ans;
// }

// Brute Force approach Using Extra Array/Vector    TC=>O(N)  Space Complexity => O(N)

vector<int> rearrangeArray(const vector<int> &nums)
{
    // Separate positive and negative integers
    vector<int> positiveNums, negativeNums;
    for (int num : nums)
    {
        if (num > 0)
        {
            positiveNums.push_back(num);
        }
        else
        {
            negativeNums.push_back(num);
        }
    }

    // Rearrange the elements
    vector<int> result;
    for (size_t i = 0; i < positiveNums.size(); ++i) // loop for the iteration
    {
        result.push_back(positiveNums[i]);
        result.push_back(negativeNums[i]);
    }

    return result;
}

int main()
{
    // Example usage
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> output = rearrangeArray(nums);

    // Print the output
    cout << "Output: [";
    for (int i = 0; i < output.size(); ++i)
    {
        cout << output[i];
        if (i < output.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
