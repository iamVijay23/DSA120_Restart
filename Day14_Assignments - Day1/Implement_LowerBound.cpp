// ! Implement the lowerrBound function

// The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last) which has a value not less than val.
//  This means that the function returns the index of the next smallest number just greater than or equal to that number. If there are multiple values that are equal to val, lower_bound() returns the index of the first such value.
// The elements in the range should be sorted.
//  Lower bound -> lower_bound() is a standard library function in C++ defined so take look at that also

#include <iostream>
using namespace std;
// Function to find the lower bound in a sorted array

// TimeComplexity -> O(log(n))
int lowerBound(int arr[], int size, int targetValue)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= targetValue)
        {
            result = mid; // Update the result and continue searching in the left half
            high = mid - 1;
        }
        else
        {
            // Continue searching in the right half
            low = mid + 1;
        }
    }

    return result;
}







// Function to find the lower bound in an array using linear search   O(N)
int linearLowerBound(int arr[], int size, int targetValue) {
    int result = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= targetValue) {
            result = i;  // Update the result and break the loop
            break;
        }
    }

    return result;
}



int main()
{
    // Example usage
    int sortedArray[] = {1, 2, 4, 4, 5, 7, 8, 10};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    int targetValue;
    cout << "Enter a target value: ";
    cin >> targetValue;
    int lowerBoundIndex = lowerBound(sortedArray, size, targetValue);

    if (lowerBoundIndex != -1)
    {
        cout << "The lower bound of " << targetValue << " is at index: " << lowerBoundIndex << endl;
    }
    else
    {
        std::cout << "The lower bound of " << targetValue << " is beyond the end of the array." << endl;
    }

    return 0;
}
