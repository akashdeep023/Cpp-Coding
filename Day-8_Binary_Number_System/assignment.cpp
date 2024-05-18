#include <iostream>
#include <cmath>
using namespace std;

// binary to decimal function
int binToDec(int n)
{
    int dec = 0;
    int i = 0;
    while (n != 0)
    {
        dec += (n % 10) * pow(2, i);
        n /= 10;
        i++;
    }
    return dec;
}

// decimal to binary function
int decTobin(int n)
{
    int bin = 0;
    int pow = 1;
    while (n > 0)
    {
        int dig = n % 2;
        bin += dig * pow;
        n /= 2;
        pow *= 10;
    }

    return bin;
}

int addToBinary(int a, int b)
{
    int sum = binToDec(a) + binToDec(b);
    return decTobin(sum);
}
int main()
{
    // Question 1 : Convert the following binary numbers into decimal forms :
    // cout << "Binary to decimal : " << binToDec(111111) << endl;
    // cout << "Binary to decimal : " << binToDec(10110) << endl;
    // cout << "Binary to decimal : " << binToDec(10011) << endl;
    // cout << "Binary to decimal : " << binToDec(110010) << endl;

    // Question 2 : Convert the following decimal numbers into binary forms :
    cout << "Decimal to binary : " << decTobin(25) << endl;
    cout << "Decimal to binary : " << decTobin(49) << endl;
    cout << "Decimal to binary : " << decTobin(31) << endl;
    cout << "Decimal to binary : " << decTobin(88) << endl;

    // ERROR ----------------------------------------------------------------------------------------------------
    // int bin = 0;
    // cout << "bin init : " << bin << endl;
    // bin += dig * pow(10, i);
    // cout << "bin A : " << bin << endl;
    // cout << "bin B : " << dig * pow(10, i) << endl;
    // cout << "bin C : " << pow(10, i) << endl;

    // cout << "bin init : " << bin << endl;
    // bin = pow(10, 1);
    // cout << "bin pow 1: " << bin << endl;
    // bin = pow(10, 2);
    // cout << "bin pow 2 : " << bin << endl;
    // bin = pow(10, 3);
    // cout << "bin pow 3: " << bin << endl;
    // bin = pow(10, 4);
    // cout << "bin pow 4: " << bin << endl;
    // bin = pow(10, 5);
    // cout << "bin pow 5: " << bin << endl;
    // bin = pow(10, 6);
    // cout << "bin pow 6: " << bin << endl;
    // bin = pow(10, 7);
    // cout << "bin pow 7: " << bin << endl;
    // bin = pow(10, 8);
    // cout << "bin pow 8: " << bin << endl;

    // Question 3 : Following are the rules of adding 2 binary digits :
    cout << "Add to binary No : " << addToBinary(111, 101) << endl;

    return 0;
}