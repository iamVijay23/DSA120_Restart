//  Given a Array containing the number of 0's and 1's count the number of 0 and 1 in the array

#include <iostream>
using namespace std;

int countZeroAndOne(int arr[], int size)
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
    cout << "Count zero is:" << zeroCount <<endl;
    cout << "Count One is:" << oneCount<<endl;
}

int main()
{
    int arr[10] = {0, 1, 0, 0, 1, 0, 1, 1, 1, 0};

    countZeroAndOne(arr, 10);
    return 0;
}