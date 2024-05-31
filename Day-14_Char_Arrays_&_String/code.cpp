#include <iostream>
using namespace std;

int main()
{
    // Char Data Type --------------------------------
    // char data type is 1 byte in size && store singel character
    // ASCII => American standard code for information interchange
    char ch = 'a';  // ASCII value => 97
    char ch2 = 'A'; // ASCII value => 65
    char ch3 = '%';
    char ch4 = '9';
    char ch5 = '\n'; // nest line (/n) is single character in c++
    cout << ch << endl;
    cout << int(ch) << endl;

    // Find characters positions
    char chh = 'f';
    int pos = chh - 'a';
    cout << pos << endl;

    // Character Arrays --------------------------------

    return 0;
}
