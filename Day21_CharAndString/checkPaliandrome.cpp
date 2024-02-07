//  Check given string is paliandrome or not

#include <iostream>
#include <cstring>
using namespace std;

bool IsPaliandrome(char ch[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            return false;
        }
        start++;
        end--;
    }
    // All character matches and it is paliandrome
    return true;
}

// string findReverseUsingWhileLoop(char c[], int size)
// {
//     int i = 0;
//     int j = size - 1;

//     while (i < j) // Change to i < j to avoid an endless loop
//     {
//         swap(c[i], c[j]);
//         i++;
//         j--; // Decrement j to move towards the beginning of the array
//     }
//     return c;
// }

int main()
{
    char ch[100];
    cout << "Enter string with @ in it : ";

    cin.getline(ch, 100);

    cout << "Before : " << ch << endl;

    if (IsPaliandrome(ch, strlen(ch)))
    {
        cout << "Valid Paliandrome" << endl;
    }
    else
    {
        cout << "InValid Paliandrome" << endl;
    }

    // if (ch == findReverseUsingWhileLoop(ch, strlen(ch)))
    // {
    //     cout << "String is paliandrome : ";
    // }
    // else
    // {
    //     cout << "String is not paliandrome : ";
    // }
}