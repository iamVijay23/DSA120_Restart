//  you have given an array of intger and you have to find the minimum element in the array

#include <iostream>
#include <limits.h>
using namespace std;

int findMinimum(int arr[], int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int main()
{
    int arr[5] = {4, 5, 6, 7, 8};

    int minimum = findMinimum(arr, 5);
    cout << "Minimum element in the array " << minimum;

    return 0;
}