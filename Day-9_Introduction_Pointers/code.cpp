#include <iostream>
using namespace std;

int main()
{
    // Introduction Pointers --------------------------------
    // 0x28a4f90b2  -> Hexdecimal number (Start with 0x) (16 base digits 0 to 9 and a to f)
    // The address of the variable is stored in memory in hexdecimal number format

    // Address of & operator --------------------------------
    // "&" is given the address of a variable and more...
    int a = 10;         // Memory address location -> 0x61ff0c
    cout << &a << endl; // &a is equal to 61ff0c -> start with 0x -> hexdecimal number

    // What are pointers ------------------------------
    // A special variable that stores address of another variable
    // int *ptr = &a; || int * ptr = &a; || int* ptr = &a; // store address of a variable
    int *ptr = &a; // Pointer store only address of a variable
    cout << "Pointer of a = " << ptr << endl;
    float PI = 3.14;
    float *ptr2 = &PI;
    cout << "Pointer of PI = " << ptr2 << endl;
    cout << "Pointer length = " << "int pointer : " << sizeof(ptr) << " float pointer : " << sizeof(ptr2) << endl; // Pointer length change in computer system
    // Pointer of pointer -> use two ampersand **
    int **pptr = &ptr;
    cout << "Pointer of pointer : " << pptr << endl;

    // Dereference Operator --------------------------------
    // Gets the value of the variable pointed to by any pointer.
    // * Operator lets us directly access and modify the value of the variable.
    // * use => multiplication , create a pointer , dereference operator
    int n = 20;
    int *ptrn = &n;
    cout << "pointer of n : " << ptrn << endl;
    cout << "value of n : " << *ptrn << endl; // use * this is called dereference operator
    *ptrn = 30;                               // change n value used pointer and dereference
    cout << "value of n : " << n << endl;

    // NULL Pointer --------------------------------
    int *ptra;
    cout << ptra << endl; // store garbage (random) address
    // We assign NULL value to a pointer to show that it doesn't exist point to any location
    int *ptrnl = NULL;     // sotre 0 address -> 0x0
    cout << ptrnl << endl; // 0
    // Dereference NULL pointer is not possible as it'll result in error
    // cout << *ptrnl << endl; // Segmentation fault -> error

    return 0;
}