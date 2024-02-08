
// Remove All Adjacent Duplicates in String  (1047 leetcode )

#include <iostream>
#include <string>
using namespace std;

// TC -> O(N) Space complexity -> O(N)
string removeDuplicates(string s)
{
    string result = " ";

    int index = 0;
    while (index < s.length())
    {

        // Condition when same character
        //  result ka rightmost character and string ka current character se compare karenge

        if ((result.length() > 0) && result[result.length() - 1] == s[index])
        {
            result.pop_back();
        }
        // Condition when diffrenent character
        else
        {
            result.push_back(s[index]);
        }
        index++;
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    string answer = removeDuplicates(str);
    cout << "after removing duplicates : " << answer << endl;
}