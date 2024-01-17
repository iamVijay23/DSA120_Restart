//  you have given an array of integer you have to reverse the array 
#include <iostream>
using namespace std;


int reverseArray(int arr[], int size)
{
    for(int left=0 , right =size-1; left<=right; left++,right--)
    {
        swap(arr[left], arr[right]);
    }

    // // Also Can be done using the while loop

    // int left =0; 
    // int right = size-1;

    // while(left<=right)
    // {
    //     swap(arr[left], arr[right]);
    //     left++;
    //     right--;
    // }
}

int main()
{
    int arr[5] = {4, 5, 6, 7, 8};

    reverseArray(arr, 5);

    // Displaying the Array 

    for(int i =0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}