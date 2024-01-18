//  Given an Array of element where each element occur more than 1 times
//  only a single value will be present only 1 times and you have to return that
//  element which present 1 times i.e Unique element

#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{
    int answer = 0;

    for (int i = 0; i < size; i++)
    {
        answer = answer ^ arr[i];
    }

    return answer;
}

int main()
{
    int arr[9] = {1,2,3,4,5,2,3,4,5};
    int answer = findUniqueElement(arr, 9);

    cout << "Unique Element is:" << answer << " ";
}