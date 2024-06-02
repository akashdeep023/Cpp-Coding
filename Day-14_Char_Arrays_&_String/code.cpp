#include <iostream>
using namespace std;
#include <cstring> // Include the header for strlen and string functions
#include <string>  // Include the header for string class

void toUpper(char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'A' + (str[i] - 'a'); // 'A; + letter position => Uppercase letter
        }
    }
    cout << str << endl;
}

void toLower(char *str, int n) // TC -> O(n)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'a' + (str[i] - 'A'); // 'a' + letter position => Lowercase letter
        }
    }
    cout << str << endl;
}

void toReverse(char *str, int n) // TC -> O(n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - 1 - i]);
    }
    cout << str << endl;
}

bool isPalindrome(char *str, int n) // TC -> O(n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

bool isAnagram(string str, string str2)
{
    if (str.length() != str2.length())
    {
        cout << "Not Valid Anagrams : ";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str2[i] - 'a'] > 0)
        {
            count[str2[i] - 'a']--;
        }
        else
        {
            cout << "Not Valid Anagrams : ";
            return false;
        }
    }
    cout << "Valid Anagrams : ";
    return true;
}

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

    // char sentence[50];
    // cout << "Enter your sentence : ";
    // cin.getline(sentence, 50); // add all sentence include whitespace and max limit to 50 characters and 3rt parameter delimiter (optional) ('*' ya '.') use optional delimiter then user allways enter delimiter
    // cin.getline(sentence, 50, '*');
    // cout << "Your sentence is : " << sentence << endl;
    // cout << "Your sentence is : " << sentence[0] << endl;
    // cout << "Your sentence string length is " << strlen(sentence) << endl;
    // cout << "Your sentence array length is " << sizeof(sentence) << endl; // sizeof(sentence) = 50 bytes

    // Convert to Upper Case --------------------------------
    char text[20] = "AppLe";
    // toUpper(text, strlen(text));
    // toLower(text, strlen(text));

    // Reverse a char array --------------------------------
    char text2[10] = "code";
    // toReverse(text2, strlen(text2));

    // Valid Palindrome --------------------------------
    // char text3[10] = "madam";
    char text3[10] = "abcvvba";
    // cout << "Palindrome : " << isPalindrome(text3, strlen(text3)) << endl;

    // <cstring> function ----------------------------------
    char str1[100];
    // str1 = "Hello world"; // --->  error (can't assign string literal to character array)
    // strcpy(str1, "Hello world"); // assign string literal to character array, using strcpy() function (cstring header file)
    char str2[50] = "Hello world";
    strcpy(str1, str2); // copy string from str2 to str1 (str1 = str2) (destination string, sourse string)
    cout << str1 << endl;

    char str3[100] = "Hello ";
    char str4[100] = "jack";
    strcat(str3, str4);   // to concatenate/join str3 with str4 (str3 = str3 + str4)
    cout << str3 << endl; // concatenate string
    cout << str4 << endl; // not changed

    char str5[100] = "abc";
    char str6[100] = "xyz";
    cout << strcmp(str5, str6) << endl;        // compares 2 strings basse on values (-ve, 0, +ve)
    cout << strcmp("abc", "abc") << endl;      // abc == abc -> 0 (compare only 1st character   )
    cout << strcmp("apple", "x") << endl;      // apple <= x -> -ve
    cout << strcmp("mango", "banana") << endl; // mango >= banana -> +ve

    // String in C++ --------------------------------
    // OOPS: Class, Object, Member Functions & Properties -> OOPS concept used
    string strval = "Hello world!"; // strval is a object not character array
    cout << strval << endl;

    // C++ String are objects of pre defined string class in STL (Standard Template Library) => STL have <string> , <vector> etc...
    // C++ String have useful member functions.
    // C++ String are dynamic (their size can be changed at run time). => C++ String size can be changed but characters array size not changed
    // C++ String operators like +, ==, >=, <, > etc. => str1 > str2
    // C++ String are sorted contiguously in memory. => C++ String create just like array in memory

    string strh = "Hello";
    cout << strh << endl;
    strh = "Yellow"; // posible in string not char array
    cout << strh << endl;

    string stri;
    // cout << "Enter string : ";
    // cin >> stri; // cin ignores word after white spaces
    // getline(cin, stri); // input , string , delimiter (optional)
    // cout << stri << endl;
    // cout << stri[0] << endl; // access string using []
    // cout << stri[1] << endl;
    // cout << stri[2] << endl;

    // For Each loop -------------------------------
    string strapna = "Apna Ghar!";
    // using for loop
    // for (int i = 0; i < strapna.length(); i++) // use dot operator => object, dot operator, member function
    // {
    //     cout << strapna[i] << ", ";
    // }
    // cout << endl;

    // using for each loop
    // for (char ch : strapna)
    // {
    //     cout << ch << ", ";
    // }
    // cout << endl;

    // String Member functions --------------------------------
    cout << strapna.length() << endl;     // length of strapna string
    cout << strapna[2] << endl;           // char of index 2 || using array
    cout << strapna.at(2) << endl;        // char of index 2 || using member function
    cout << strapna.substr(2, 2) << endl; // starting index and length of substring
    string strfind = "I love coding in C++  & Java. I don't like Python, like C++";
    cout << strfind.find("C++") << endl;        // returns index of 1st occurrence of word
    cout << strfind.find("C++", 20) << endl;    // returns index of 1st occurrence of word || 2nd parameter index no to find before the word
    cout << strfind.find("JavaScript") << endl; // word not existing in the string then returns ansigned value (84738273836583) return == -1
    int idx = strfind.find("JavaScript");
    cout << idx << endl; // -1

    // Valid Anagram --------------------------------
    string strana = "anagram";
    string strana2 = "nagaram";
    cout << isAnagram(strana, strana2) << endl;
    string strana3 = "car";
    string strana4 = "rat";
    cout << isAnagram(strana3, strana4) << endl;

    // Using Operators
    string strop = "Hello";
    string strop2 = "Hello";
    cout << (strop == strop2) << endl;
    cout << (strop > strop2) << endl;
    cout << (strop < strop2) << endl;
    cout << (strop >= strop2) << endl;
    cout << (strop <= strop2) << endl;
    cout << (strop != strop2) << endl;

    return 0;
}
