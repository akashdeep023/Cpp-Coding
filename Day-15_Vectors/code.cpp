#include <iostream>
#include <vector>
using namespace std;

// g++ code.cpp -o code && ./code => normal run
// g++ -std=c++11 code.cpp -o code && ./code => c++ 11 invoke

void func()
{
    int arr[100] = {1, 2, 3, 4, 5}; // Static Array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void funcInt()
{
    int *ptr = new int; // Dynamic integer || ptr creating in Static memory and dynamic integer creation in Heap memory || (new keyword used to new memory allocation)
    *ptr = 5;           // assign value of ptr using dereference
    cout << *ptr << endl;
    // Static memory delete after operation but heap memory not delete after operation
    delete ptr; // delete heap memory after operation end || free space || (delete keyword used to delete memory allocated)
}

void funcArray()
{
    int size;
    cout << "Size of Dynamic Array : ";
    cin >> size;
    int *ptr = new int[size]; // Dynamic Array || ptr creating in Static memory and dynamic array creation in Heap memory || (new keyword used to new memory allocated)

    for (int i = 0; i < size; i++)
    {
        ptr[i] = i + 1;
        cout << ptr[i] << ", ";
    }
    // Static memory delete after operation but heap memory not delete after operation
    delete[] ptr; // delete heap memory after operation end || free space || (delete keyword used to delete memory allocated)
}

void pairSumBruteForce(vector<int> ptr, int target)
{
    for (int i = 0; i < ptr.size(); i++)
    {
        for (int j = i + 1; j < ptr.size(); j++)
        {
            if (ptr[i] + ptr[j] == target)
            {
                cout << "Indies no : {" << i << ", " << j << "} => " << ptr[i] << " + " << ptr[j] << " = " << target << endl;
            }
        }
    }
}

void pairSumEfficient(vector<int> ptr, int target)
{
}

int main()
{
    // Creating 1D Dynamic Array --------------------------------
    // int arr[100] = {1, 2, 3, 4, 5}; // Static Array

    // func(); // Static Array

    // funcInt(); // Dynamic Array

    // int size;
    // cout << "Size of Dynamic Array : ";
    // cin >> size;
    // int *ptr = new int[size]; // Dynamic Array || ptr creating in Static memory and dynamic array creation in Heap memory || (new keyword used to new memory allocated)

    // for (int i = 0; i < size; i++)
    // {
    //     ptr[i] = i + 1;
    //     cout << ptr[i] << ", ";
    // }
    // delete[] ptr; // delete heap memory after operation end || free space || (delete keyword used to delete memory allocated)

    // funcArray();

    // Dynamic Memory Allocation --------------------------------
    // Static memory delete after operation but heap memory not delete after operation ----
    // Static => Compile time allocation => Fixed Size memory allocation => in Static memory => Remove Function(main ya other) frame then remove memory allocation
    // Dynamic => Run time allocation => Dynamic Size memory allocation => Dynamic array creating in Heap memory and ptr in Static memory => Remove Function(main ya other) frame then remove memory allocation

    // Static v/s Dynamic Allocation --------------------------------
    // Static memory allocation           Dynamic memory allocation
    // Allocation at complie time         Allocation at run time (new oparator)
    // Uses stack memory                  Uses Heap memory
    // Gets freed automatically           Needs to be freed explicitly (delete oparator)

    // Memory Leak ------------------------------------
    // A memory leak occurs when programmers create a memory in a heap and forget to delete it.
    // Leads to reduced performance due to depletion of available memory.
    // Operations end (task end) in C++ then Stack memory delete and heap memory delete (Only C++). Your program is big then we use delete Operators to delete memory allocated locations.

    // 2D Dynamic Arrays --------------------------------
    // Direct 2D Array Creation not possible.
    // int *ptr = new int; -> integer -> integer pointer
    // int *ptr = new int[5]; -> 1D array -> array pointer
    // int **matrix = new int *[5]; -> 2D array -> array of pointer

    // int row, col;
    // cout << "Row No : ";
    // cin >> row;
    // cout << "Column No : ";
    // cin >> col;
    // int **matrix = new int *[row]; // array of pointers => {*ptr,*ptr2,*ptr3,...,*ptrn}
    // for (int i = 0; i < row; i++)
    // {
    //     matrix[i] = new int[col]; // array pointer => {val1,val2,val3,...,valn}
    // }
    // int k = 1;
    // for (int i = 0; i < row; i++) // data storage
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         matrix[i][j] = k++; // matrix[i][j] == *(*(matrix + i) + j)
    //         cout << matrix[i][j] << ", ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // cout << "matrix[2][2] = " << matrix[2][2] << endl;
    // cout << "*(*(matrix + 2) + 2) = " << *(*(matrix + 2) + 2) << endl;

    // What is STL (Standard Template Library) of C++ --------------------------------
    // It is library (Collections) of container classes, algorithms & iterations.
    // It contains the implementation of common data structures like vector, stack, maps etc.

    // Vector Introductions --------------------------------
    // Like Dynamic array that can resize dynamically at runtime
    // Thet are stored continuously in memory.
    // Sequence Container -> store in sequence
    // memory is allocated and deallocated automatically in vector
    // vector<int> vec1;                     // initialization vector
    // cout << vec1.size() << endl;          // size 0
    // vector<int> vec2 = {1, 2, 3, 4, 5};   // initialization and add value
    // cout << vec2.size() << endl;          // size 5
    // vector<int> vec3(5);                  // initialization vector with size
    // cout << vec3.size() << endl;          // size 5
    // vector<int> vec4(10, 1);              // initialization vector with size and all values equal to 1
    // cout << vec4.size() << endl;          // size 10
    // for (int i = 0; i < vec4.size(); i++) // 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    // {
    //     cout << vec4[i] << ", "; // vec4[i] == *(vec + i)
    // }
    // cout << endl;

    // Vector implementation in memory --------------------------------
    // size = no of elements in vector
    // capacity = max no of elements that vector can hold || capacity multiplying 2
    vector<int> vect = {1, 2, 3, 4}; // size = 4 && capacity = 4
    // add 1 elements                // size = 5 && capacity = 4 * 2 => 8
    // add 1 elements                // size = 6 && capacity = 4 * 2 => 8
    // add 3 elements                // size = 9 && capacity = 8 * 2 => 16
    // capacity change then TC O(n) => all vector elements copy in other vector and old vector delete
    // cout << "Size : " << vect.size() << endl;         // size = 4
    // cout << "Capacity : " << vect.capacity() << endl; // capacity = 4
    // vect.push_back(5);                                // add 5 element in last of vectors || TC = O(1)
    // cout << "Size : " << vect.size() << endl;         // size = 5
    // cout << "Capacity : " << vect.capacity() << endl; // capacity = 8
    // vect.pop_back();                                  // remove last element from vector
    // cout << "Size : " << vect.size() << endl;         // size = 4
    // cout << "Capacity : " << vect.capacity() << endl; // capacity = 8

    // Pain Sum --------------------------------
    // Find if any pair in sorted vector has target sum.
    vector<int> vecs = {2, 7, 11, 15};
    int target = 9;
    pairSumBruteForce(vecs, target);
    pairSumEfficient(vecs, target);

    return 0;
}