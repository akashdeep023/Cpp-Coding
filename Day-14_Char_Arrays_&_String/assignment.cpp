#include <iostream>
#include <string>
using namespace std;

int getVowelCount(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

bool areAlmostEqual(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    char diffChar1, diffChar2;
    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (!diff)
            {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }
            else
            {
                if (s1[i] != diffChar2 || s2[i] != diffChar1)
                {
                    return false;
                }
            }
            diff++;
        }
        if (diff > 2)
        {
            return false;
        }
    }
    if (diff == 1)
    {
        return false;
    }
    return true;
}

int main()
{
    // Question 1 : Count how many times lowercase vowels occurred in a String entered by the user.
    string str;
    // cout << "Enter a string : ";
    // getline(cin, str);
    // cout << "Vowels occurred count : " << getVowelCount(str) << endl;

    // Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
    string s1 = "bank";
    string s2 = "kanb";
    cout << areAlmostEqual(s1, s2);

    return 0;
}