#include <iostream>
#include <vector>
using namespace std;

// Leetcode questions
// Optimized Approach  TimeComplexity  -> O(N+K) and Space Complexity -> O(K) almost close to O(1)
//  Where  N is the size of vector and K is the rotation factor
void rotateArray(vector<int> &nums, int k)
{
    int size = nums.size();
    // Reduce k if it's greater than the size of the array
    k = k % size;
    // Copy first k elements into the temporary array
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[size - k + i];
    }
    // Shift the remaining elements to the right
    for (int i = size - k; i >= 0; i--)
    {
        nums[i] = nums[i - k];
    }
    // Copy elements from the temporary array back to the vector
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}

// Better Approach  TimeComplexity  -> O(N) and Space Complexity -> O(N) using extra space
//  Where  N is the size of vector and K is the rotation factor
// void rotate(vector<int> &nums, int k)
// {
//     int size = nums.size();
//     vector<int> answer(size);
//     for (int index = 0; index < size; index++)
//     {
//         int newIndex = (index + k) % size;
//         answer[newIndex] = nums[index];
//     }
//     nums = answer;
// }

int main()
{
    vector<int> nums(8, 0);
    cout << "Give Input for the Vector: "
         << " ";
    for (int i = 0; i < 8; i++)
    {
        cin >> nums[i];
    }
    cout << "Give the Value of K for the rotation "
         << " ";
    int k;
    cin >> k;

    rotateArray(nums, k);

    cout << "After Rotation Vector :" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << nums[i] << " ";
    }
}