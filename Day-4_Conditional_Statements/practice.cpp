#include <iostream>
using namespace std;

int main (){
    // Practice Question 01 ------------------------
    // Print the largest of 2 numbers.

    // int num1, num2;
    // cout << "Enter num1: ";
    // cin >> num1;
    // cout << "Enter num2: ";
    // cin >> num2;
    // if(num1 > num2){
    //     cout << num1 << " is the largest" << endl;
    // }if(num1 == num2){
    //     cout << num1 << " and " << num2 << " are equal" << endl;
    // }else{
    //     cout << num2 << " is the largest" << endl;
    // }

    // Practice Question 02 ------------------------
    // Print if a number is Odd and Even.

    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // if(a % 2 == 0){
    //     cout << a << " is even" << endl;
    // }else{
    //     cout << a << " is odd" << endl;
    // }

    // Practice Question 03 ------------------------
    // Create an Income tax calculator.

    // int income;
    // cout << "Enter your income: ";
    // cin >> income;
    // if(income < 500000){
    //     cout << "Your tax is: 0% => " << 0 << endl;
    // }else if(income < 1000000){
    //     cout << "Your tax is: 10% => " << income * 0.1 << endl;
    // }else{
    //     cout << "Your tax is: 20% => " << income * 0.2 << endl;
    // }

    // Practice Question 04 ------------------------
    // Print the largest or 3 numbers

    // int a, b, c;
    // cout << "Enter a: ";
    // cin >> a;
    // cout << "Enter b: ";
    // cin >> b;
    // cout << "Enter c: ";
    // cin >> c;
    // if(a > b && a > c){
    //     cout << "a : " << a << " is the largest" << endl;
    // }else if(b > c){
    //     cout << "b : " << b << " is the largest" << endl;
    // }else{
    //     cout << "c : " << c << " is the largest" << endl;
    // }

    // Practice Question 05 ------------------------
    // Build a calculator using switch fot the 4 basic arithmetic operations(+,-,*,/)

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Choose an operation (+,-,*,/) : ";
    char op;
    cin >> op;
    switch(op){
        case '+' : cout << a << " + " << b << " = " <<  a + b << endl; break;
        case '-' : cout << a << " - " << b << " = " <<  a - b << endl; break;
        case '*' : cout << a << " * " << b << " = " <<  a * b << endl; break;
        case '/' : cout << a << " / " << b << " = " <<  (float)a / b << endl; break;
        default : cout << "Invalid operation" << endl; break;
    }

    return 0;
}