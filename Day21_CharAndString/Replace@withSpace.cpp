//  Replace the @ with the space in the string

#include <iostream>
#include <cstring>
using namespace std;

//  Time Complexity => O(L) where L is length of char array
void replace_WithSpace(char ch[], int n)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            // Insert Space 
            ch[index] = ' ';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cout << "Enter string with @ in it : ";

    cin.getline(ch, 100);

    cout << " Before : " << ch << endl;

    replace_WithSpace(ch, strlen(ch));

    cout << " After : " << ch << endl;
}