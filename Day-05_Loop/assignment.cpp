#include <iostream>
using namespace std;

int main()
{
    // Question 1 : Write a program to find the Factorial of a number entered by the user.
    // Hint : factorial of a number (n) = n * (n-1) * (n-2) * (n-3) *...........* 1

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // int factorial = 1;
    // for (int i = n; i > 0; i--){
    //     factorial *= i;
    // }
    // cout << "The factorial of " << n << " is " << factorial << endl;

    // Question 2 : Write a program to print the multiplication table of a number, entered by the user.

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 1; i <= 10; i++){
    //     cout << n << " * " << i << " = " << n * i << endl;
    // }

    // Question 3 : Write a program to input a number and check whether the number is an Armstrong number or not.
    // An Armstrong number is a number that is equal to the sum of cubes of its digits

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // int cubeSum = 0;
    // int orgNum = n;
    // while(n > 0){
    //     int digit = n % 10;
    //     int digitCube = digit * digit * digit;
    //     cubeSum += digitCube;
    //     n /= 10;
    // }
    // if( cubeSum == orgNum){
    //     cout << orgNum << " is an Armstrong number" << endl;
    // }else{
    //     cout << orgNum << " is not an Armstrong number" << endl;
    // }

    // Question 4 : For a positive N , Write a program that prints all the prime numbers from 2 to N. (Assume N >= 2)

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // if (n < 0)
    // {
    //     cout << "Please enter a positive number" << endl;
    // }
    // else if (n <= 1)
    // {
    //     cout << "Please enter a number greater than 1" << endl;
    // }
    // int count = 0;
    // for (int i = 2; i <= n; i++)
    // {
    //     bool isPrime = true;
    //     for (int j = 2; j * j <= i; j++)
    //     {
    //         count++;
    //         if (i % j == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    // cout << "Itration count : " << count << endl;

    // Question 5 : For a positive N , Write a program that prints the first N Fibonacci numbers. (Assume N >= 2)
    // Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
    // This is a series where each number is a sum of previous 2 numbers in the series.Eg

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int firstNum = 0;
    int secNum = 1;
    cout << firstNum << " " << secNum << " ";
    for (int i = 2; i < n; i++)
    {
        int thirdNum = firstNum + secNum;
        cout << thirdNum << " ";
        firstNum = secNum;
        secNum = thirdNum;
    }
    cout << endl;

    return 0;
}