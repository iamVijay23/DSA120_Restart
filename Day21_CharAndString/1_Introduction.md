#  Introduction to Character Array and Strings

In C++, a char array is a data structure that holds a sequence of characters in contiguous memory locations. It is commonly used to represent strings, but it can also be used to hold any sequence of characters. char store 1 byte information means equal to 8 bit 

# Declarations

Declaration: Char arrays can be declared in various ways:

```
char myCharArray[10]; // Declares an array of 10 characters

char myString[] = "Hello"; // Declares a char array initialized with a string
```

# Initialization

Char arrays can be initialized at the time of declaration or later:

```
char myCharArray[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Null-terminated string

```

# Accessing Elements

Individual elements of a char array can be accessed using array indexing:

```
char myCharArray[] = "Hello"; 

char firstChar = myCharArray[0]; // Accessing the first character
```

# Size and Length: 
The size of a char array can be determined using the sizeof operator, while the length of a null-terminated string can be obtained using the strlen function (from <cstring>):

```
char myString[] = "Hello";

int size = sizeof(myString); // Size of the array

int length = strlen(myString); // Length of the string
```
# Input and Output: 
Char arrays can be read from and written to using input/output functions (cin and cout in C++):

```
char myString[20]; 
cin >> myString;   // Reads input into myString
cout << myString;   // Outputs myString
```

# Getline function:
In C++, we have another function named as cin.getline() which takes 3 arguments:

● Name of the string or character array name

● Length of the string

● Delimiter (optional argument)
### Syntax:
```cin.getline(string_name, length_of_string, delimiter);```
Note: This function breaks at new line. This also initializes the last position to NULL.
Delimiter denotes the ending of each string. Generally, it is ‘\n’ by default.
Let’s look at some examples:
```Suppose the input we want to take is: Hello how are you?```
If the input commands are:

● cin.getline(input, 100);: this will input all the characters of input

● cin.getline(input, 3);: this will input only the first 3 characters of input and discard
the rest instead of showing error

# Memory Management: 
Char arrays in C++ require manual memory management. If dynamic allocation is required, you need to use pointers and memory allocation functions (new, delete, malloc, free).

# Character Encoding:
 Char arrays are based on the character encoding scheme used by the system, typically ASCII or UTF-8.

# Mutable: 
Char arrays are mutable, meaning you can change individual characters in the array.

# Character Array vs. String Class: 
While char arrays are the traditional way of handling strings in C++, the std::string class from the C++ Standard Library provides a more convenient and safer alternative for string manipulation. std::string automatically manages memory allocation and provides a wide range of member functions for string manipulation.