//  Reverse of String

/* 
The array itself is not passed by value or reference; it's passed as a pointer.
Any changes made to the elements of the array within the function will reflect outside the function.
The size of the array is passed by value, so changes to the size parameter within the function will not affect the size of the array outside the function.

*/ 

#include <iostream>
#include <cstring> // Include <cstring> for strlen function
using namespace std;

// Tc -> O(N)
void findReverseUsingWhileLoop(char c[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j) // Change to i < j to avoid an endless loop
    {
        swap(c[i], c[j]);
        i++;
        j--; // Decrement j to move towards the beginning of the array
    }
}

int main()
{
    char ch[100];
    
    cout << "Enter a string: ";
    cin.getline(ch, 100); // Read the string including whitespaces

    cout << "Before Reverse: " << ch << endl;
    findReverseUsingWhileLoop(ch, strlen(ch));

    cout << "After Reverse: " << ch << endl;
   

    cout<<"Reverse using Built in functions:"<< strrev(ch) << endl;
}



