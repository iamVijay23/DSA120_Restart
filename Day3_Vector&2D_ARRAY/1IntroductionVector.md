## What is STL ?

STL is stand forStandard Template Library provides a collection of template classes and function that offer common data structures and algorithms to make programming more efficiend and convenient.

## What is Vector ?

A vector in C++ Standard Template Library (STL) represents a dynamic array that can grow shrink in size , making it a versatile and efficient data structure for storing and manipulating sequences of elements (Array).

## Creating Static And Dynamic Memory Allocation

```
Static Memory ( Compile Time Allocation )

   int arr [5] =  {1,2,3,4,5}

Dynamic Memory ( Run Time Allocation )

    int n ;
    cin>> n ;
    int * arr = new int [n];

Each element in this array will be 0 or garbage by default
```

## Initialize Vector:

- Before creating the Vector we have to include the header files of it - `#include<vector>`
- `vector<datatype> vector_name ;` // creates a vector of integers with size 0

- Example -> `vectore<int> vec`

- `vector<datatype> vector_name (size, value) ;` // creates a vector of integers with the specified size with having the same value although it size can increase as it is dynamic in size


## Features of Vectors

1) Contiguous Memory: Elements in a vecotr are stored in contiguous memory locations , which makes it efficiend for random access and iteration.

2) Dynamic Sizing : Unlike built-in Array in C++, which have a fixed size, vector can dynamically resize itself as elements are added or removed. This dynamic sizing is managed internally , so you dont' need to worry about memory management.

3) Size and Capacity : Vecotr maintains two important Properties : the size which is the number of elements currently stored in the vector , and the capacity , which is the number of elements the vector can hold without reallocation.

4) Array-Like Access:  You can access elements in a vector using array-like syntax using square brackets [] or using  at() member function.


## Methods In Vectors

- Push Back : Add an element at last . It increases the Size of Vector.
  `Syntax: vector_name.push_back(value);`

- Pop : Remove the element from last . It decrease the size of vector.
  `Syntax: vector_name.pop_back();`

- Clear : Clear all the element from the vector.
  `Syntax: vector_name.clear();`

- Size : Using this Method we can find the size of the vector
  `Syntax: vector_name.size()`;

- At : Access any Element using its Index. If index is out of range then it gives out_of_range.
  `Syntax: vector_name.at();`

- Front / Back : Access First and Last Element Respectively.
`Syntax: vector_name.front() , vector_name.back()`;
