// Implement the UpperBound function
// Upper Bound  -> upper_bound() is a standard library function in C++ defined in the header. It returns an iterator pointing to the first element in the range [first, last) that is greater than value, or last if no such element is found. The elements in the range shall already be sorted or at least partitioned with respect to val.

// ! Implement the lowerrBound function

// The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last) which has a value not less than val.
//  This means that the function returns the index of the next smallest number just greater than or equal to that number. If there are multiple values that are equal to val, lower_bound() returns the index of the first such value.
// The elements in the range should be sorted.

// UpperBound -> upper_bound() is a standard library function in C++ defined please take a look at that also 





#include <iostream>
using namespace std;
// Function to find the lower bound in a sorted array


// TimeComplexity -> O(log(n))
int upperBound(int arr[], int size, int targetValue)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > targetValue)
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

// Function to find the upper bound in an array using linear search
int linearUpperBound(int arr[], int size, int targetValue) {
    int result = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > targetValue) {
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
    int upperBoundIndex = upperBound(sortedArray, size, targetValue);

    if (upperBoundIndex != -1)
    {
        cout << "The upper bound of " << targetValue << " is at index: " << upperBoundIndex << endl;
    }
    else
    {
        std::cout << "The upper bound of " << targetValue << " is beyond the end of the array." << endl;
    }

    return 0;
}
