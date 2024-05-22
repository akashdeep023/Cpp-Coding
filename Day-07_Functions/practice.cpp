#include <iostream>
using namespace std;

// Write a function to find product of 2 numbers - a and b.
int product(int a, int b)
{
    return a * b;
}

// Write a function if a number is odd and even.
bool isEven(int a)
{
    return (a % 2 == 0);
}

// Write a function to print the factorial of a number, n.
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Write a function to print if a number is prime or not.
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Write a function to find the binomial coefficient for given number n & r.
// nCr = n! / r!(n-r)!
int binomialCoefficient(int n, int r) // n = 4(choise : a,b,c,d), r = 2(select) |-> ab,ac,ad,bc,bd,cd. => 6
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Write a function to print all prime numbers in a range of 2 to n.
void allPrimeNum(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int prod = product(4, 5);
    cout << "Product : " << prod << endl;
    cout << "Is Even : " << isEven(8) << endl;
    cout << "Factorial : " << factorial(5) << endl;
    cout << "Is Prime : " << isPrime(2) << endl;
    cout << "Binomial Coefficient : " << binomialCoefficient(4, 2) << endl; // 6
    allPrimeNum(100);
    return 0;
}