// Write a C++ Program to find the duplicate value in the array

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

// Time Complexity: O(n)
// Space Complexity: O(n)

void findDuplicatesUsingMap(const std::vector<int> &arr)
{
    std::unordered_map<int, int> countMap;

    for (int num : arr)
    {
        if (countMap.find(num) == countMap.end())
        {
            countMap[num] = 1;
        }
        else
        {
            std::cout << "Duplicate found: " << num << std::endl;
            break; // Break out of the loop after finding the first duplicate
        }
    }
}

// Time Complexity: O(n log n)
// Space Complexity: O(1)
void findDuplicatesUsingSorting(std::vector<int> arr)
{
    std::sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            std::cout << "Duplicate found: " << arr[i] << std::endl;
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)
int findDuplicate(const std::vector<int> &arr)
{
    int slow = arr[0];
    int fast = arr[0];

    // Phase 1: Detect the intersection point in the cycle
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Phase 2: Find the entrance to the cycle (duplicate element)
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow; // or fast, as they both point to the same element
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 2, 5, 6, 7};

    findDuplicatesUsingMap(arr);
    findDuplicatesUsingSorting(arr);
    std::cout << "Duplicate found: " << findDuplicate(arr) << std::endl;

    return 0;
}
