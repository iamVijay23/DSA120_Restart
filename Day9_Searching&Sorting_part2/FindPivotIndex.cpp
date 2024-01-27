// Find the pivot Index of the array element
//   Pivot -> it id maximum element in the array
// solve it in the O(Log n)  using binary search

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &arr)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // Corner Case for single element in the array

        if (start == end)
        {
            return start; // we can return mid or end also as there is single element
        }

// mid + 1 < size && 
         if ( mid + 1 < size &&  arr[mid] > arr[mid + 1]) // yeha condition mai galti kar sakte  h please pay more attention ... mid+1 check karna ki size ke bahar na jaaye
        {
            return mid; // that will be our pivot index
        }
        // mid - 1 >= 0 && 
        else if ( mid - 1 >= 0 && arr[mid] < arr[mid - 1])
        // yeha condition mai galti kar sakte  h please pay more attention ... mid-1 check karna ki  negative index na de
        {
            return mid - 1; // that will be our pivot index
        }

        else if (arr[start] > arr[mid])
        {
            end = mid - 1; // answer will be on left side;
        }

        else
        {
            start = mid + 1; // answer will be on right side
        }

        mid = start + (end - start) / 2;
    }
    return -1; // if there is no pivot  index
}

int main()
{
    vector<int> arr = { 12,14, 16 , 2, 4, 6, 8, 10}; 
//  please dry run on the condition where {1,3 } and {2, 4,6,8,10}
    int answer = pivotIndex(arr); 

    cout<<"Pivot index -> "<<answer<<endl;
}