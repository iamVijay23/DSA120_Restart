//  Given an integer array of size N containing negative and positive numbers in the array
//  Your task is to suffle the array such that all the negative element will be on left and positive to the right.
//  Sequence of element can be anything only negative element should be at front

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Method 1-> By the help of Sorting Algo (O(nlogN))

// void negativeAndPositive(int arr[], int size)
// {
//     sort(arr, arr + size);
// }

//  Method 2 - > Using Temparory Array  ( Tc -> O(N) , SC -> O(N))
// vector<int> negativeAndPositive(int arr[], int size)
// {
//     vector<int> tempArray;
//     int i = 0;
//     // Insert Negative element first
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < 0)
//         {
//             tempArray.push_back(arr[i]);
//         }
//     }

//     // Insert Positive  element first
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > 0)
//         {
//             tempArray.push_back(arr[i]);
//         }
//     }

//     return tempArray;
// }

//  Method 3 -> Two Pointer Approach  (TC -> O(N) , SC -> O(1))
void negativeAndPositive(int arr[], int size)
{

    int negativePlace = 0;

    for (int index = 0; index < size; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[negativePlace]);
            negativePlace++;
        }
    }
}

int main()
{
    int arr[9] = {23, -7, -10, 12, 5, -3, 8, 0, 2};
    int size = 9;

    //  For Method 2
    // vector<int> answer = negativeAndPositive(arr, size);

    // for (int i = 0; i < answer.size(); i++)
    // {
    //     cout << answer[i] << " ";
    // }

    negativeAndPositive(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}