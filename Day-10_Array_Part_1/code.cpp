#include <iostream>
using namespace std;

int main()
{
    // Start DSA (Data Structure Algorithm) -> Just a way of arranging data.
    // Arrays --------------------------------
    // Linear collection of same type of elements that are stored together in contiguous(Ak ke baad ak) memory space.
    int marks[50];             // store garbage int value of every position || index of marks 0 to 49
    cout << marks[0] << endl;  // garbage value
    cout << marks[1] << endl;  // garbage value
    cout << marks[2] << endl;  // garbage value
    cout << marks[3] << endl;  // garbage value
    cout << marks[50] << endl; // garbage value || warning show

    int marks2[50] = {1, 2, 3}; // index of marks2 0 to 49 || initialize 3 index with values and other index intializes with 0 value.
    cout << marks2[0] << endl;  // 1
    cout << marks2[1] << endl;  // 2
    cout << marks2[2] << endl;  // 3
    cout << marks2[3] << endl;  // 0
    cout << marks2[50] << endl; // garbage value || warning show

    int marks3[] = {1, 2, 3};  // index of marks3 0 to 2 || elements no of size
    cout << marks3[0] << endl; // 1
    cout << marks3[1] << endl; // 2
    cout << marks3[2] << endl; // 3
    cout << marks3[3] << endl; // garbage value warning show

    cout << sizeof(marks) << endl;               // 200 => 50 no of elements * int type (4 bytes)
    cout << sizeof(marks) / sizeof(int) << endl; // length of marks

    return 0;
}