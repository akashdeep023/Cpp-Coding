#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Print pattern
    // cout << "****\n";
    // cout << "***\n";
    // cout << "**\n";
    // cout << "*\n";
    cout << "****\n***\n**\n*\n";
    // Variable
    int a = 10;
    int b = 5;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    int n;
    cout << "n : " << n << endl; // rendom number
    n = 50; // assign value to n
    cout << "n : " << n << endl;

    // Naming conventions
    // Start with _ (underscore) and later => a, age, _book || 1, 5age -> Wrong variable
    // use laters, numbers, and _ (underscore)
    // not using keywords(reserved words) in variable name

    // Data types
    // Premitive                                    Non-Premitive
    // Integer(int 4Bytes) (1Byte == 8Bit)          String
    // Character(char 1Bytes)                       Array
    // Boolean(bool 1Bytes)
    // Floating Point(float 4Bytes)
    // Double Floating Point(double 8Bytes)
    int age = 22;
    int marks = -110;
    cout << "size of int: " << sizeof(int) << endl;
    cout << "age: " << age << endl;
    cout << "marks: " << marks << endl;
    char grade = 'A';
    cout << "size of char: " << sizeof(char) << endl;
    cout << "grade: " << grade << endl;
    bool adult = true; // true => 1 && false => 0
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "adult: " << adult << endl;
    float cgpa = 8.6;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "cgpa: " << cgpa << endl;
    double price = 90.99;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "price: " << price << endl;

    float PI = 3.14159483958;
    double PI2 = 3.14159483958;
    cout << "PI: " << PI << endl;
    cout << "PI2: " << PI2 << endl;
    // include iomanip header file
    cout <<setprecision(12)<< "PI: " << PI << endl;
    cout <<setprecision(12)<< "PI2: " << PI2 << endl;

    // Input in C++
    int DOB;
    cout << "Enter your DOB: ";
    cin >> DOB;
    cout << "Your DOB is: " << DOB << endl;

    // Sum of  a & b
    int x;
    int y;
    // input x
    cout << "Enter x: ";
    cin >> x;
    // input y
    cout << "Enter y: ";
    cin >> y;
    // calculate
    int sum = x + y;
    cout << "Sum of x & y: " << sum << endl;
    int min = x - y;
    cout << "Minus of x & y: " << min << endl;
    int prod = x * y;
    cout << "Prod of x: " << prod << endl;
    int div = x / y; // int / int = int
    cout << "Divis of x: " << div << endl;

    // Print average Marks
    float math, che, phy;
    cout << "Enter your Marks: Math, Che, Phy" << endl;
    cin >> math >> che >> phy;
    cout << "Average Marks: " << (math + che + phy) / 3 << endl;
    return 0;
}
