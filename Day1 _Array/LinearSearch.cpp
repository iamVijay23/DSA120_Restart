#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {4, 5, 6, 7, 8};

    bool answer = linearSearch(arr, 5, 7);
    cout << "Key is Present or Not : " << answer;

    return 0;
}