
/*  You're given a sorted array 'a' of 'n' integers and an integer 'x'.



Find the floor and ceiling of 'x' in 'a[0..n-1]'.



Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.


Example:
Input:
n=6, x=5, a=[3, 4, 7, 8, 8, 10]

Output:
4 7

Explanation:
The floor and ceiling of 'x' = 5 are 4 and 7, respectively.

 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// TimeComplexity ->O(N)
pair<int, int> getFloorAndCeilUsingLinearSearch(vector<int> &a, int n, int x)
{
    pair<int, int> answer;

    int floorResult = INT_MIN;
    int ceilResult = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= x && a[i] > floorResult)
        {
            floorResult = a[i];
        }

        if (a[i] >= x && a[i] < ceilResult)
        {
            ceilResult = a[i];
        }
    }

    // If floorResult is still INT_MIN, no element is <= x
    answer.first = (floorResult == INT_MIN) ? -1 : floorResult;
    // If ceilResult is still INT_MAX, no element is >= x
    answer.second = (ceilResult == INT_MAX) ? -1 : ceilResult;

    return answer;
}

// Time Complexity  -> O (logN) Space Complexity -> O(1)


int floorBS(vector<int>& a, int size, int target)
{
     int start = 0;
     int end = size-1;
     int result = -1;
     while(start<=end)
     {
        int mid = start + (end-start)/2;

        if(a[mid]==target)
        {
            return mid;
        }

        if( a[mid] < target)
        {
            result = a[mid];
            start = mid+1;
        }
        else {
            end = mid-1;
        }
     }

     return result ;
}



int ceilBS(vector<int>& a, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] == target)
        {
            return mid;
        }

        if (a[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            result = a[mid];
            end = mid - 1;
        }
    }

    return result;
}


pair<int, int> getFloorAndCeilUsingBinarySearch(vector<int> &a, int n, int x){

   
    pair<int, int> answer;

    answer.first = floorBS(a,n,x);
    answer.second = ceilBS(a,n,x);

    return answer;
}

int main()
{
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int n = arr.size();
    int x ;
    cout<<"Enter a value"<<endl;
    cin>>x;

    // pair<int, int> result = getFloorAndCeilUsingLinearSearch(arr, n, x);

    pair<int, int> result = getFloorAndCeilUsingBinarySearch(arr,n,x);


    cout << "Floor: " << result.first << endl;
    cout << "Ceil: " << result.second << endl;

    return 0;
}
