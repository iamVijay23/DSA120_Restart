// Given a string and you can remove atmost one (0 ya 1 )character from the string and check after removing the character the string is paliadrome or not

#include <iostream>
#include <string>
using namespace std;

bool IsPaliandrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    // All character matches and it is paliandrome
    return true;
}


// Time Complexity -> O(N) worst case because first character is mismatched 
bool validPaliandromeAfterRemovelOneCharacter_II(string str)
{
    int start = 0;
    int end = str.length() - 1;
    // Without removing the character from the string is paliandrome 
    if (IsPaliandrome(str, start, end))
    {
        return true;
    }
    //  Case when we have to check the string is valid paliandrome
    else
    {
        while(start <= end){
            // when both the character are same then just ignore and move ahead 
            if(str[start] == str[end])
            {
                start++;
                end--;
            }
            //  when both the character are not equal 
            else{
                // s[start] != s[end] 
                //  one removal allowed 

                bool ans1 = IsPaliandrome(str, start+1 , end); // removing the current positon of start as it is not matching with thec current end position character 

                bool ans2 = IsPaliandrome(str, start , end-1);

                return ans1 || ans2; // returning the ovverall answer 
            }
        } 
    }
}

int main()
{
    string str;
    cin >> str;

    bool answer = validPaliandromeAfterRemovelOneCharacter_II(str);

    // Using Ternary Operations
    answer ? cout << "Given a string is paliandrome "
                  << "Yes" << endl
           : cout << "Given a string is paliandrome"
                  << "No" << endl;
}