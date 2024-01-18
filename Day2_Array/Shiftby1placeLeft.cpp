// Given an Array of integer you have to shift its element to the
// left By One Place

//  Input  -> {1,2,3,4,5,6,7};
//  Output -> {7,1,2,3,4,5,6}

#include <iostream>
using namespace std;

void leftShiftByOne(int arr[], int size)
{
    // Store the last element into temp variable
    int temp = arr[0];

    // Shift all the element to left
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    // Replace the first element by temp variable value;
    arr[size - 1] = temp;
}

int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    leftShiftByOne(arr, size);

    cout << "After Shifting the element " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}