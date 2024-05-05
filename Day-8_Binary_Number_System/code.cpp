#include <iostream>

using namespace std;

void binToDec(int binNum)
{
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0, 2^1, 2^2 ....
    while (n > 0)
    {
        int dig = n % 10;
        decNum += dig * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout << "Binary to Decimal " << binNum << " : " << decNum << endl;
}

void decToBin(int decNum)
{
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 10^0, 10^1, 10^2 ...
    while (n > 0)
    {
        int dig = n % 2;
        binNum += dig * pow;
        pow = pow * 10;
        n /= 2;
    }

    cout << "Decimal to Binary " << decNum << " : " << binNum << endl;
}

int main()
{
    // Data type modifier --------------------------------
    // long int (different bytes for your computer) >= 4 bytes
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    // long double (different bytes for your computer) >= 4 bytes
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    // short int (different bytes for your computer) 2 bytes
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl; // short use for int (max time)
    // long long == long long int (different bytes for your computer) >= 4 bytes ya >= 8 bytes
    cout << sizeof(int) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(long long int) << endl;
    // signed (signed int is same as int) -2^31 to (2^31 - 1)
    // unsigned (can only store non-negative numbers) 2^32 || 1st left bit = MSB_BIT (most significant bit) to diside number is negative or positive
    unsigned short int age = 22; // range -> positive or 2 bytes

    // Convert from binary to decimal --------------------------------
    binToDec(1001);
    // Convert from decimal to binary --------------------------------
    decToBin(4);
    return 0;
}