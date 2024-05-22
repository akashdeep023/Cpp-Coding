#include <iostream>
using namespace std;

int main()
{
    // What will ptr2 point to in the following code
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1; // &x
    cout << ptr1 << " == " << ptr2 << " == " << &x << endl;

    // What is the type of a and b.
    float *a, b;
    cout << "type of a = float pointer" << "\n"
         << "type of b = normal float variable" << endl;

    // Can we initialize a pointer with value 0.
    int *ptr = 0; // is equal to to NULL pointer
    cout << ptr << endl;
    return 0;
}