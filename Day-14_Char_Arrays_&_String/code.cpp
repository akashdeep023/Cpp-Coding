#include <iostream>
using namespace std;
#include <cstring> // Include the header for strlen

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
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};   // Character arrays
    cout << arr << endl;                       // Character array name is not store memory location || store value and more
    char arr2[5] = {'c', 'o', 'd', 'e', '\0'}; // Character string array -> character string array to close '\0' ('\0' == null character)
    cout << arr2 << endl;                      // Character string array name is not store memory location || store only value

    cout << endl;
    // "code" => string literal
    // character array assign value to "code" (string literal) then automatically assign null ('\0') value in char array || length = 5

    char work[] = "code"; // length = 5 || auto assign value '\0'
    cout << work << endl;
    char work2[5] = "code"; // length = 5 ya more || auto assign value '\0'
    cout << work << endl;
    char work3[] = {'c', 'o', 'd', 'e', '\0'}; // length = 5 ya more || auto assign value
    cout << work << endl;
    char work4[50] = {'c', 'o', 'd', 'e', '\0'}; // char array length = 50 || string length = 4
    cout << work << endl;

    // #include <cstring> Include the header for strlen
    cout << strlen(work4) << endl; // string length = 4 = existing char number

    // Input char array ---------------------------------------
    // char random[20];
    // cout << "Enter your random word : ";
    // cin >> random; // ignore word after whitespace
    // cout << "Your random word is : " << random << endl;
    // cout << "Your random word string length is " << strlen(random) << endl;
    // cout << "Your random word array length is " << sizeof(random) << endl; // sizeof(random) = 50 bytes

    char sentence[50];
    cout << "Enter your sentence : ";
    cin.getline(sentence, 50, '*'); // add all sentence include whitespace and max limit to 50 characters and 3rt parameter delimiter (optional) ('*' ya '.')
    cout << "Your sentence is : " << sentence << endl;
    cout << "Your sentence is : " << sentence[0] << endl;
    cout << "Your sentence string length is " << strlen(sentence) << endl;
    cout << "Your sentence array length is " << sizeof(sentence) << endl; // sizeof(sentence) = 50 bytes

    return 0;
}
