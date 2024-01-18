// Given array of integer element you have to print
//  All the pairs of array

//  input -> {10,20,30,40}
// Output  ->

#include <iostream>
using namespace std;

int printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] <<" , "<< arr[j] << endl;
        }
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    printPairs(arr, 4);
}