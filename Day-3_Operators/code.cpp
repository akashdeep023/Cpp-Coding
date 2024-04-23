#include <iostream>
using namespace std;
// macros symbolic constants - use values before executing
#define g  9.8 // not use memory space
#define ll  long long

int main(){
    // Constant --------------------------------

    // const float PI = 3.14; // variable use memory space || must be initialized
    // // PI = 3.15; not allowed
    // cout<< PI << endl;
    // long long X = 10;
    // ll Y = 20;
    // cout<< X << " " << Y << endl;

    // Typecasting Implicit conversions (Automatic/Typed promotion) --------------------------------
    // Done by compiler to avoid data loss.
    // bool -> char -> int -> float -> double

    // cout << (10 / 3) << endl; // 3  -> int/int = int
    // cout << (10 / 3.0) << endl; // 3.3333 -> int/float = float
    // cout << ('A' + 0) << endl; // 65 -> char + int = int
    // cout << ('a' + 0) << endl; // 65 -> char + int = int

    // Typecasting Explicit conversions (Forced by programmer) -----------------------------

    // float a = 5.56;
    // cout << (int)a << endl; // 5.56 (float) -> 5 (int)
    // cout << ((float)10/3) << endl; // 3 (int) -> 3.3333(float)
    // cout << (char)('A' + 1) << endl; // 66 (int) -> B (char)
    // cout << (int)('A') << endl; // A (char) -> 65 (int)

    // Practices --------------------------------

    // cout << ((bool)3 + 2) << endl; // 1 (bool) + 2 (int) -> 3 (int)
    // cout << (23.5 + 2 + 'A') << endl; // 23.5 (double) + 2 (int) + 'A' (char) -> 90.5 (double)

    // Operations-----------------------------
    // Arithmetic operator -----------------------------------
    // (+,-,*,/,% => binary operator = use 2 operands) (++,-- => unary operator = use 1 operand)

    // Binary operator
    // int a = 5;
    // int b = 2;
    // cout << "+ addition           : "<< a + b << endl; // 7
    // cout << "- subtraction        : "<< a - b << endl; // 3
    // cout << "* multiple           : "<< a * b << endl; // 10
    // cout << "/ divide             : "<< a / b << endl; // 2
    // cout << "% modulo (remainder) : "<< a % b << endl; // 1

    // Unary operator
    // int x = 3;
    // cout << "x = " << x << endl;
    // ++x;
    // cout << "++ pre increment   : "<< x << endl; // 4
    // --x;
    // cout << "-- pre decrement   : "<< x << endl; // 3
    // x++;
    // cout << "++ post increment  : "<< x << endl; // 4
    // x--;
    // cout << "-- post decrement  : "<< x << endl; // 3
    // cout << "x value = " << x << endl; // 3

    // cout << "++ pre increment   : "<< ++x << endl; // 4 (update & then use) x = 4
    // cout << "-- pre decrement   : "<< --x << endl; // 3 (update & then use) x = 3
    // cout << "++ post increment  : "<< x++ << endl; // 3 (use & then update) x = 4
    // cout << "-- post decrement  : "<< x-- << endl; // 4 (use & then update) x = 3
    // cout << "x value  : "<< x << endl; // 3

    // int a = 5;
    // int b = ++a;
    // cout << "a = " << a << endl; //6
    // cout << "b = " << b << endl; //6
    // int c = 5;
    // int d = c++;
    // cout << "c = " << c << endl; //6
    // cout << "d = " << d << endl; //5

    // Assignment operator (=,+=,-=,*=,/=) -----------------------------------
    // int a = 5; // assign value to a variable
    // a += 2;    //  a = a + 2; -> 7
    // a -= 2;    //  a = a - 2; -> 3
    // a *= 2;    //  a = a * 2; -> 10
    // a /= 2;    //  a = a / 2; -> 2
    // cout <<"a = "<< a << endl;

    // Relational operators (>,>=,<,<=,==,!=)-----------------------------------
    // int a = 3;
    // int b = 5;
    // cout << (a > b) << endl;    // False -> 0
    // cout << (a >= b) << endl;   // False -> 0
    // cout << (a < b) << endl;    // True -> 1
    // cout << (a <= b) << endl;   // True -> 1
    // cout << (a == b) << endl;   // False -> 0
    // cout << (a != b) << endl;   // True -> 1

    // Logical operator (And (&&), Or (||), Not (!)) -----------------------------------
    // && => T && T => True Otherwise => False
    // || => F || F => False Otherwise => True
    int a = 5;
    int b = 6;
    cout << ((a > b) && (a < b)) << endl; // F && T -> False -> 0
    cout << ((a > b) || (a < b)) << endl; // F && T -> True -> 1
    cout << (!(a > b)) << endl; // Not False -> True -> 1

    return 0;
}