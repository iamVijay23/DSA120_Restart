//  You have a given an array of integer and you have to print it extremely or you have to print the suffle of array

// Input  -> {10,20,30,40,50,60}
// Output  -> {10,60,20,50,30,40}

#include <iostream>
using namespace std;

int extremePrint(int arr[], int size)
{

    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
    }
}

int main()
{
    int arr[5] = {4, 5, 6, 7, 8};

    cout << "Original Array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Extreme Array " << endl;
    extremePrint(arr, 5);

    return 0;
}