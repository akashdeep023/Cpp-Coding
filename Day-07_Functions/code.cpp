#include <iostream>
using namespace std;

// Function :- Block of code witch runs when it is called. ----------------------------
// returnType functionName(){
//     do some work
//     return someValue; // Optional
// }
// functionName(); // function call

void sayHello()
{ // returnType - void (Empty return)
    cout << "Hello (:" << endl;
}

void assistance()
{
    sayHello();
    cout << "Work done!" << endl;
}

// Forward Declaration --------------------------------
// Declaration : the function's name, returnType, and parameters (if any)
// Definition : the body of the function
void helloPrint(); // Declarations (ex - int n; declare)

// Syntax with Parameters --------------------------------
// returnType functionName(type param1, type param2){
//     do some work
//     return someValue; // Optional
// }
void sum(int a, int b) // a and b are parameters returnType void
{
    cout << a + b << endl;
}

int sumNum(int a, int b) // a and b are parameters returnType int
{
    return a + b;
}
int sumNumDef(int a, int b = 1) // a and b are parameters or always last parameter default value
{
    return a + b;
}

// Scope (Area  where a variable can be access or use) ----------------------------------
// Local scope variables => function, loop, if else, { }. (access of use only that block)
// Global scope variables => initialize variables outof local scope. (access or use any where)

// Function Overloading --------------------------------
// Multiple functions with the same name but different parameters (parameters type different && no of parameters).
int add(int a, int b)
{
    cout << a << " + " << b << " : " << a + b << endl;
    return a + b;
}
double add(double a, double b)
{
    cout << a << " + " << b << " : " << a + b << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << a << " + " << b << " + " << c << " : " << a + b + c << endl;
    return a + b;
}

// main function (Start Execution)
int main()
{
    // sayHello(); // function call
    // sayHello(); // function call
    assistance();
    helloPrint();         // function call forward declaration
    sum(1, 2);            // 2 and 4 are arguments
    int s = sumNum(2, 3); // return sum of arguments
    cout << "sum two arg : " << s << endl;
    int sd = sumNumDef(2); // return sum of 2 and default param value
    cout << "sum one arg : " << sd << endl;
    int st = sumNumDef(2, 5); // return sum of 2,5
    cout << "sum two arg : " << st << endl;
    // Function overloading -> function name same -> parameter different -> compiler known witch function called
    add(2, 3);     // int type argument passed
    add(2.5, 1.5); // double type argument passed
    add(2, 3, 4);  // int type three argument passed

    return 0;
}

void helloPrint() // Definitions { } inside body (ex - n = 1; assign)
{
    cout << "Hello Jack" << endl;
}