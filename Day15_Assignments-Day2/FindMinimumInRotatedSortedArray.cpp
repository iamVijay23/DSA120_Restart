//  153 -> Leetcode Find Minimum In Sorted Rotated Array 

#include <vector>
#include <iostream>
#include <limits>

using namespace std;

int findMin(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    int ans = numeric_limits<int>::max(); // Use numeric_limits to get maximum value for int

    while (start <= end) {
        int mid = (start + end) / 2;

//  When the search space is already sorted and not rotated then minimum will be at the first position
        if( arr[start] <= arr[end])
        {
            ans = arr[start];
            break;
        }
        // Compare with arr[mid] instead of arr[start] in the second branch
        if (arr[start] <= arr[mid]) {
            ans = min(ans, arr[start]);
            start = mid + 1;
        } else {
            ans = min(ans, arr[mid]);
            end = mid - 1;
        }
    }

    return ans;
}
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found
        }
    }

    return -1;  // Return -1 if the target is not found
}


int main() {
    // Example usage
    vector<int> rotatedArray = {4, 5, 6, 7, 0, 1, 2};
    int result = findMin(rotatedArray);

    cout << "Minimum element in the rotated array: " << result << endl;

    return 0;
}
