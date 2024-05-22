#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
void isPalindrome(int n)
{
    int revNum = reverse(n);
    if (revNum == n)
    {
        cout << n << " is a palindrome" << endl;
    }
    else
    {
        cout << n << " is not a palindrome" << endl;
    }
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int abSqrt(int a, int b)
{
    int res = a * a + b * b + 2 * a * b;
    return res;
}

int largeNum(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

char getNextChar(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else if (ch == 'Z')
    {
        return 'A';
    }
    else
    {
        return ch + 1;
    }
}
int main()
{
    // Question 1 : Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)

    isPalindrome(121);

    // Question 2 : Write a function to calculate the sum of digits of a number.

    cout << "sum of digits : " << sumOfDigits(793) << endl;

    // Question 3 : Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

    cout << "(a + b) power of 2 : " << abSqrt(2, 3) << endl;

    // Question 4 : Write a function that prints the largest of 3 numbers.

    cout << "Largest of numbers : " << largeNum(3, 9, 4) << endl;

    // Question 5 : Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet.
    // Eg : input = ‘c’, return value = ‘d’

    cout << "Get next character : " << getNextChar('K') << endl;

    return 0;
}