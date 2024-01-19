## Introduction to 2D Arrays in C++

2D arrays in C++ are also known as multidimensional arrays. They are essentially an array of arrays.

In a 2D array, each element is itself an array, which contains the actual values.

To declare a 2D array in C++, we can use the following syntax:

```cpp
dataType arrayName[size1][size2] ;
```

## Declare  & Initializing a 2D Array

There are two ways to initialize a 2D array in C++:

## Method 1

```
int arr[4][2] = {
  {1234, 56},
  {1212, 33},
  {1434, 80},
  {1312, 78}
};
```

## Method 2

```
int arr[4][2] = {1234, 56, 1212, 33, 1434, 80, 1312, 78};
```

## Accessing Elements

To access an element in a 2D array, you can use the following syntax:
`array_name[row][column]`



## Behind the scene

A 2D Array behind the scene store as Normal Array with the index. let's suppose:

int arr[2][2] = {{1234, 56}, {1312, 78}};

behind the scene it is store as [123, 56, 1312, 78]

and we can find the index at which element will store by the help of formula ->
`totalNumber of Column * row  + column`

## Note : 
It is always neccessary to pass the column number in the 2D Array other wise it will throw error Why ? to send it  -> `totalNumber of Column * row  + column`  for conversion of 2D array we need the total number of column thats why it is neccessary !
