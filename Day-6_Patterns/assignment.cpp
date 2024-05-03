#include <iostream>
using namespace std;

int main()
{
    // Question 1 : Print the 0-1 Triangle Pattern. n = 5
    // bool val = true;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << val << " ";
    //         val = !val;
    //     }
    //     i % 2 == 0 ? val = true : val = false;
    //     cout << endl;
    // }

    // Question 2 : Print the Rhombus Pattern. n = 5
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Question 3 : Print the Palindromic Pattern with Numbers. n = 5
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j + 1 << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}