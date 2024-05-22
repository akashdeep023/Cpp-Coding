#include <iostream>
using namespace std;

void func(int arr[]) // pass by reference || Not copy
{
    arr[0] = 1000;
}

void func2(int *ptr) // pass by reference || Not copy
{
    cout << "ptr[0] : " << ptr[0] << " == *ptr : " << *ptr << endl;
    ptr[0] = 2000;
}

void printArray(int nums[], int n) // pass only reference || array size not passed in reference || pass in other parameters
{
    // cout << "Size of nums : " << sizeof(nums) << endl; // pointer size == 4 ya 8 (divise depend) || warning show
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ", ";
    }
}

int main()
{
    // Start DSA (Data Structure Algorithm) -> Just a way of arranging data.
    // Arrays --------------------------------
    // Linear collection of same type of elements that are stored together in contiguous(Ak ke baad ak) memory space.

    // Creating an Array --------------------------------
    // int marks[50];             // store garbage int value of every position || index of marks 0 to 49
    // cout << marks[0] << endl;  // garbage value
    // cout << marks[1] << endl;  // garbage value
    // cout << marks[2] << endl;  // garbage value
    // cout << marks[3] << endl;  // garbage value
    // cout << marks[50] << endl; // garbage value || warning show

    // int marks2[50] = {1, 2, 3}; // index of marks2 0 to 49 || initialize 3 index with values and other index intializes with 0 value.
    // cout << marks2[0] << endl;  // 1
    // cout << marks2[1] << endl;  // 2
    // cout << marks2[2] << endl;  // 3
    // cout << marks2[3] << endl;  // 0
    // cout << marks2[50] << endl; // garbage value || warning show

    // int marks3[] = {1, 2, 3};  // index of marks3 0 to 2 || elements no of size
    // cout << marks3[0] << endl; // 1
    // cout << marks3[1] << endl; // 2
    // cout << marks3[2] << endl; // 3
    // cout << marks3[3] << endl; // garbage value warning show

    // cout << sizeof(marks) << endl;               // 200 => 50 no of elements * int type (4 bytes)
    // cout << sizeof(marks) / sizeof(int) << endl; // length of marks

    // Output & Input Array --------------------------------
    // Output Array
    // int arr[5] = {3, 7, 1, 9, 2};
    // int n = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << ", ";
    // }
    // cout << endl;

    //  Input Array & Output Array
    // int arr2[5];
    // int m = sizeof(arr2) / sizeof(int);
    // cout << "Enter element of array" << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> arr2[i];
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr2[i] << ", ";
    // }
    // cout << endl;

    // Create Dynamically Array
    // int l;
    // cout << "Enter length of Array : ";
    // cin >> l;
    // int arr3[l];
    // cout << "Enter element of array :" << endl;
    // for (int i = 0; i < l; i++)
    // {
    //     cin >> arr3[i];
    // }
    // for (int i = 0; i < l; i++)
    // {
    //     cout << arr3[i] << ", ";
    // }
    // cout << endl;

    // Find largest & smallest in array --------------------------------
    // int arr[5] = {5, 4, 3, 9, 12};
    // int larg = arr[0];
    // int small = arr[0];
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     if (larg < arr[i])
    //     {
    //         larg = arr[i];
    //     }
    //     if (small > arr[i])
    //     {
    //         small = arr[i];
    //     }
    // }
    // cout << "Largest element : " << larg << endl;
    // cout << "Smallest element : " << small << endl;

    // Array are passed by reference --------------------------------
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl; // 0x...

    // int arr[5] = {7, 2, 8, 5, 3};
    // array name converted to a pointer => memory address
    // cout << "arr : " << arr << endl; // 0x... == address of arr[0]
    // cout << *arr << endl;       // arr[0] => 7
    // cout << *(arr + 1) << endl; // arr[1] => 2
    // cout << *(arr + 2) << endl; // arr[2] => 8
    // cout << *(arr + 3) << endl; // arr[3] => 5
    // cout << *(arr + 4) << endl; // arr[4] => 3

    // cout << "arr[0] : " << arr[0] << " == " << "*arr : " << *arr << endl;
    // func(arr);
    // cout << arr[0] << endl;
    // func2(arr);
    // cout << arr[0] << endl;

    // int arr[5] = {7, 2, 8, 5, 3};
    // int n = sizeof(arr) / sizeof(int);
    // cout << "Size of arr : " << sizeof(arr) << endl;
    // printArray(arr); // wrong method pass only reference of arrays
    // printArray(arr, n); // good method pass reference of arrays and size of arrays

    // Linear search --------------------------------

    return 0;
}