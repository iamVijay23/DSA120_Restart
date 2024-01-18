#include <iostream>
using namespace std;

int printTriplates(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k]<<endl;
            }
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printTriplates(arr, 5);
}