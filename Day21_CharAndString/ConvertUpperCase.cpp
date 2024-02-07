#include <iostream>
#include <cstring> // Include <cstring> for strlen function
using namespace std;


//  TC -> O(L) where l is length of string
void convertToUpperCase(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currentCharacter = ch[index];
        // If Current character is in lower case then conver to upper case
        if (currentCharacter >= 'a' && currentCharacter <= 'z')
        {
            ch[index] = currentCharacter - 'a' + 'A'; // Formula to convert to upper case
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cout << "Enter a string to convert : ";
    cin.getline(ch, 100);

    cout << "Before : " << ch << endl;

    convertToUpperCase(ch, 100);

    cout << "After : " << ch << endl;
}