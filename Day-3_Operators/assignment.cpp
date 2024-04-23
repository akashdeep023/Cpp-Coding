#include <iostream>
using namespace std;

int main (){
    // 1. Question ---------
    // int x = 2, y = 5;
    // int exp1 = (x * y / x); // 2 * 5 / 2 => 10 / 2 => 5
    // int exp2 = (x * (y / x)); // 2 * (5 / 2) => 2 * 2 => 4
    // cout << exp1 << ",";
    // cout << exp2 << "\n";
    // Output => 5, 4

    // 2. Question ---------
    // int x = 10, y = 5;
    // int exp1 = (y * (x / y + x / y)); // 5 * (10 / 5 + 10 / 5) => 5 * (2 + 2) => 5 * 4 => 20
    // int exp2 = (y * x / y + y * x / y); // 5 * 10 / 5 + 5 * 10 / 5 => 50 / 5 + 50 / 5 => 10 + 10 => 20
    // cout << exp1 << " ";
    // cout << exp2 << "\n";
    // Output => 20 20

    // 3. Question ---------
    int x = 200, y = 50, z = 100;
    if(x > y && y > z){ // T && F => F -> 0
    cout << "Hello \n";
    }
    if(z > y && z < x){ // T && T => T -> 1
    cout << "C++ \n";
    }
    if((y+200) < x && (y+150) < z){ // F && F -> 0
    cout << "Hello C++ \n";
    }
    // Output => C++


    return 0;
}