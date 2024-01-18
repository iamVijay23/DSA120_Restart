// Given array of integer and a target element 
//  give number of pairs whose pairs sum is equal to the 
// Target value 


#include <iostream>
using namespace std;

int countPairsWithSum(int arr[], int size, int target)
{
    int countPairs = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                countPairs++;
            }
        }
    }

    return countPairs;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = countPairsWithSum(arr, size, target);

    cout << "Number of pairs with sum " << target << ": " << result << endl;

    return 0;
}
