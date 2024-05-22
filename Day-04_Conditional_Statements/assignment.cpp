#include <iostream>
using namespace std;

int main(){
    // Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // if(num > 0){
    //     cout << num << " is positive";
    // }else if(num < 0){
    //     cout << num << " is negative";
    // }else{
    //     cout << num << " is zero";
    // }

    //Question 2 : Write a C++ program that takes a year from the user and print whether that year is a leap year or not.

    // int year;
    // cout << "Enter a year : ";
    // cin >> year;
    // if (year % 400 == 0) {
    // cout << year << " is a leap year.\n";
    // } else if (year % 100 == 0) {
    // cout << year << " is NOT a leap year.\n";
    // } else if (year % 4 == 0) {
    // cout << year << " is a leap year.\n";
    // } else {
    // cout << year << " is NOT a leap year.\n";
    // }

    // Question 3 : What will be the value of x & y in the following program:

    // int a = 63, b = 36;
    // bool x = (a < b) ? true : false; // x = false => x = 0
    // int y = (a > b) ? a : b; // y = a => y = 63
    // cout << x << "," << y << endl; // x = 0(false), y = 63

    // Question 4 : What’ll be the output of the program:

    // int a = 5;
    // if (++a*5 <= 25) { // ++5*5 <= 25 => 6*5 <= 25 => false
    // cout<<"Hello\n";
    // } else {
    // cout<<"Bye\n"; // print the output
    // }

    // Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits.

    int a;
    cout << "Enter a 3 digit number : ";
    cin >> a;
    int dig1 = a % 10;
    int dig2 = (a / 10) % 10;
    int dig3 = (a / 100) % 10;
    if(a == dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3){
        cout << a << " is an Armstrong number.\n";
    }else{
        cout << a << " is NOT an Armstrong number.\n";
    }

    return 0;
}