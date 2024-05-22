#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    // Question 1 : What will be the output of the following code :
    int n;
    int *ptrn;             // store garbage address
    cout << *ptrn << endl; // dereference of pointer, garbage value
    n = 7;
    ptrn = &n;             // store address of n
    cout << *ptrn << endl; // address of n

    // Question 2 : What will be the output of the following code :
    int x = 1, y = 2, z = 3;
    multipleBy2(x, y, z);
    cout << x << y << z << endl; // 246

    // Question 3 : What will be the output of the following code :
    int a = 32;
    int *ptr = &a; // address of a
    char ch = 'A';
    char &cho = ch;                  // reference variable of ch
    cho += a;                        // char(ch + a) => char('A' + a) => char(65 + 32) => char(97) => 'a'
    *ptr += ch;                      // int(32 + a) => int(32 + 97) => int(129) => 129
    cout << a << ", " << ch << endl; // 129,a

    return 0;
}