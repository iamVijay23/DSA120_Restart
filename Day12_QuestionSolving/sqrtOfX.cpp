

//  Given A positive Number X find its square root without using any STL Library Try to solve in O(logN);

#include <iostream>

#include <cmath>
using namespace std;

//  Time Complexity -> O(LogN) Space complexity (O(1))

int sqrtUsingBinarySearch(int x)
{
    int start = 0;
    int end = x;
    
    long long  int mid = start + (end - start) / 2;
    long long int  answer = -1;  // To avoid the overflow long long used 

    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}


//  Time Complexity -> O(N) Space complexity (O(1))
int sqrtUsingLinearSearch(int x)
{
    int answer = -1;

    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }
    for (int i = 1; i * i <= x; i++)
    {
        if (i * i < x)
        {
            answer = i;
        }
    }
    return answer;
}

int sqrtUsingSTL(int x)
{
    int answer = sqrt(x);  //Note: If a negative argument is passed to sqrt(), domain error occurs.
    return answer;
}
int main()
{
    int x;
    cout << "Enter a number to find its square root =>"
         << " ";
    cin >> x;
    int answer = sqrtUsingSTL(x);
    cout << "Square root of number: " << answer;
}