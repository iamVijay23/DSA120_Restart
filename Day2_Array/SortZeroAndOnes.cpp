// Given an Array of binary element means it contain only 0 and 1
//  you have to sort them

#include <iostream>
using namespace std;

int sortZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else
            oneCount++;
    }
        // // Place all the zero and one into the array

        // for (int i = 0; i < zeroCount; i++)
        // {
        //     arr[i] = 0;
        // }

        // for (int j = zeroCount; j < size; j++)
        // {
        //     arr[j] = 1;
        // }

        //! Another Easy Way

        int index = 0;

        while (zeroCount--)
        {
            arr[index++] = 0;
        }

        while (oneCount--)
        {
            arr[index++] = 1;
        }
    
}

int main()
{
    int arr[9] = {0, 1, 0, 0, 0, 1, 0, 1, 0};
    int size = 9;

    sortZeroOne(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}