//  Write a program to print the length of the string
#include <iostream>
#include <cstring> // Include <cstring> for strlen function
using namespace std;


// Tc -> O(N)
int findLength(const char c[], int size)
{
    int length = 0;
    for (int i = 0; i < size; i++)
    {
        if (c[i] == '\0') // current character is null then terminate
        {
            return length;
        }
        else
        {
            length++;
        }
    }
    return length; // Added to handle the case when size is not sufficient
}
// Tc -> O(N)
int findLengthUsingWhileLoop(char c[], int size){
   
    int index = 0;
    while(c[index] != '\0'){
       
        index++;
    }
    return index; 
}

int main()
{
    char ch[100];
    cout << "Enter a string: ";
    cin.getline(ch, 100); // Read the string including whitespaces

    int length = findLength(ch, 100);
    cout << "Length -> " << length << endl;

    cout << "Length Using built-in function -> " << strlen(ch) << endl;

    return 0;
}
