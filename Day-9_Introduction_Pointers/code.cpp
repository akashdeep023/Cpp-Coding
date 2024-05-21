#include <iostream>
using namespace std;

// Pass by value
void changeX(int arg)
{
    arg = 20;            // create a copy of argument
    cout << arg << endl; // 20
}

// Pass by reference using pointer
void changePtnY(int *arg)
{
    *arg = 20;            // dereference
    cout << *arg << endl; // 20
}

// Pass by reference using reference variable
void changeRefZ(int &param)
{
    param = 20;            // reference variable
    cout << param << endl; // 20
}

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

    // Passing Arguments --------------------------------
    // Pass by value -> When parameter is a copy of actual argument variable in memory.
    int x = 10;
    changeX(x);
    cout << x << endl; // 10
    // Pass by reference -> When we pass the reference of argument to the function.
    int y = 10;
    changePtnY(&y);    // using pointer, pass address
    cout << y << endl; // 20

    // Reference Variable --------------------------------
    // Reference Variable is an alternate name (alias) of already existing variable.
    // a and b refer to the same location in memory
    int k = 5;
    int &l = k; // reference variable to locate old location memory || must be initialized reference variable
    l = 15;
    cout << k << endl;
    cout << l << endl;
    int z = 10;
    changeRefZ(z);     // using reference, pass reference variable
    cout << z << endl; // 20

    return 0;
}