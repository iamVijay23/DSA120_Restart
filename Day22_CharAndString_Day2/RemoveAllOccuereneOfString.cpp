// Given a string and a substring to be removed from the string  and return the string after removing all the occurence of the substring

//  For npos learn it from here : https://www.educative.io/answers/what-is-stringnpos-in-cpp

#include <iostream>
#include <string>
using namespace std;

string removeOccurence(string s, string substring)
{
    while (s.find(substring) != string::npos) // npos means no position in string having defined value -1
    {
        // if inside loop it means substring exists
        s.erase(s.find(substring), substring.length());
    }
    return s;
}

int main()
{
    string str;
    cin >> str;
    string part;
    cin >> part;
    string answer = removeOccurence(str, part);
    cout << "After removing occurence : " << answer << endl;
}