// Given a string representation we have to count the number of palindrome substring in the string have

#include <iostream>
using namespace std;

int expandInString(string str, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < str.length())
    {
        if (str[i] == str[j])
        {
            i--;
            j++;
            count++; // means it is paliandrome substring
        }
    }
    return count;
}

int countPaliandromeSubstring(string str)
{
    int totalCount = 0;
    for (int center = 0; center < str.length(); center++)
    {

        int oddCenter = expandInString(str, center, center);

        int evenCenter = expandInString(str, center, center + 1);

        totalCount += oddCenter + evenCenter;
    }

     return totalCount;
}

int main()
{
    string str;
    cin >> str;

    int count = countPaliandromeSubstring(str);
    cout << "Number of palindrome substring " << count;
}