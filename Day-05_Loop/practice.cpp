#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Print "Apna College" 5 times. ------------------------
    // for(int i = 1; i <= 5; i++){
    //     cout << "Apna College" << endl;
    // }

    // Print number from 1 to n. ------------------------
    // cout << "Enter number n : ";
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++){
    //     cout << i << " ";
    // }
    // cout << endl;

    // Print sum of first n natural numbers. ------------------------
    // int s;
    // cout << "Enter natural number : ";
    // cin >> s;
    // int sum = 0;
    // for (int i = 1; i <= s; i++){
    //     sum += i;
    // }
    // cout << "N natural numbers SUM : "<< sum << endl;

    // Print the square pattern using for loop. ------------------------
    // for (int i = 1; i < 5; i++){
    //     cout << "* * * *" << endl;
    // }
    // cout << endl;

    // Print number from n to 1 using for loop. ------------------------
    // int n;
    // cout << "Enter number n : ";
    // cin >> n;
    // for (int i = 1; i <= n; n--){
    //     cout << n << " ";
    // }
    // cout << endl;

    // // Ya

    // int m;
    // cout << "Enter number m : ";
    // cin >> m;
    // for (int i = m; i >= 1; i--){
    //     cout << i << " ";
    // }
    // cout << endl;

    // Print the sum of digits of a number using while loop n =10829 -----------------------
    // int n;
    // cout << "Enter number n : ";
    // cin >> n;
    // int sumDigits = 0;
    // while( n > 0){
    //     sumDigits += n % 10;
    //     n = n / 10;
    // }
    // cout << "Sum of digits : " << sumDigits << endl;

    // Print the sum of odd digits of a number using while loop. ------------------------
    // int n;
    // cout << "Enter number n : ";
    // cin >> n;
    // int sumOddDigits = 0;
    // while(n > 0){
    //     if(n % 2 == 1 ){
    //         sumOddDigits += n % 10;
    //     }
    //     n /= 10;
    // }
    // cout << "Sum of odd digits : " << sumOddDigits << endl;

    // Print the digits of a given number in reverse using while loops.
    // int num;
    // cout << "Enter number : ";
    // cin >> num;
    // while (num > 0 ){
    //     cout << num % 10 << " ";
    //     num /= 10;
    // }

    // Reverse a given number & print the result.
    // int num;
    // cout << "Enter number : ";
    // cin >> num;
    // int rev = 0;
    // while(num > 0){
    //     int digit = num % 10;
    //     rev = (rev * 10) + digit;
    //     num /= 10;
    // }
    // cout << "Reverse number : " << rev << endl;

    // Write a program where user can keep entering numbers till they enter a multiple of 10.
    // int n;
    // do{
    // cout << "Enter number : ";
    // cin >> n;
    //     if(n % 10 == 0){
    //         cout << "Multiple of 10" << endl;
    //         break;
    //     }
    //     cout << "You entered : " << n << endl;
    // } while (true);

    // Write a program to show number entered by user expect multiple of 10.
    // int n;
    // do{
    //     cout << "Enter number : ";
    //     cin >> n;
    //     if (n % 10 == 0) {
    //         cout << "Multiple of 10" << endl;
    //         continue;
    //     }
    //     cout << "You entered : " << n << endl;
    // } while (true);

    // Check if a number is prime or NOT. (2,3,5,7,11,13,17,...,etc.)
    int n;
    bool isPrime = true;
    cout << "Enter a number : ";
    cin >> n;
    // for (int i = 2; i < n; i++){ // 2 to (n-1) check
    //     if(n % i == 0 ){ // n divide by i => NOT prime
    //         cout << n << " divide by " << i << endl;
    //         isPrime = false;
    //         break;
    //     }
    // }
    for (int i = 2; i <= sqrt(n); i++){ // 2 to (n-1) check
        if(n % i == 0 ){ // n divide by i => NOT prime
            cout << n << " divide by " << i << endl;
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n <<" is Prime" << endl;
    }else{
        cout << n << " is Not Prime" << endl;
    }

        return 0;
}