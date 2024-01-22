#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    
    // Calculate the expected sum of numbers from 0 to n
    int expectedSum = (n * (n + 1)) / 2;

    // Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    // The missing number is the difference between the expected sum and actual sum
    return expectedSum - actualSum;
}

int main() {
    // Example usage:
    vector<int> nums = {3, 0, 1};
    
    int missingNumber = findMissingNumber(nums);
    
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
