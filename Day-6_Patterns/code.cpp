#include <iostream>
using namespace std;

int main()
{
    // loop inside a loop --------------------------------
    // for (int i = 1; i <= 4; i++) // outer loop (print row wise)
    // {
    //     for (int j = 1; j <= 4; j++) // inner loop (print coloum wise)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    // Output :
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4

    // Print Star pattern --------------------------------
    // int n;
    // cout << "Enter number of stars: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    // *
    // * *
    // * * *
    // * * * *

    // Print inverted Star pattern --------------------------------
    // int n;
    // cout << "Enter number of stars: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    // * * * *
    // * * *
    // * *
    // *

    // Print Half Pyramid pattern --------------------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // Print Charactor pyramid --------------------------------
    // int n;
    // char ch = 'A';
    // cout << "Enter number : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch++ << " "; // post increment (use then update value) || ch = ch + 1; => ch = 'A' + 1 => ch = 66 => char ch = 'B'
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    // A
    // B C
    // D E F
    // G H I J

    // Print Hollow Rectangle pattern --------------------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "* "; // first star
    //     for (int j = 1; j <= n - 1; j++)
    //     {
    //         if (i == 1 || i == n)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "* " << endl; // last star
    // }
    // Output : n = 4
    // * * * * *
    // *       *
    // *       *
    // * * * * *

    // Inverted & Rotated Half-Pyramid -------------------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n - 1; j++) // Space Print
    //     {
    //         cout << "  ";
    //     }
    //     for (int z = 1; z <= i; z++) // Star Print
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    //       *
    //     * *
    //   * * *
    // * * * *

    // Print Floyd's Triangle --------------------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num++ << " ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // Print Diamond Pattern --------------------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // // 1st pyramid
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // // 2nd pyramid
    // for (int i = 2; i <= n; i++) // int i = 1 dual harf diamond || i = 2 full diamond
    // {
    //     for (int j = 1; j <= i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j <= 2 * n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // Output : n = 4
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    //   * * * * *
    //     * * *
    //       *

    // Print Butterfly Pattern --------------------------------
    int n;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) // loop 1 to n
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - i); j++) // print spaces between star
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--) // loop reversed n to 1
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = i; j <= 2 * n - i - 1; j++) // print spaces between star
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Output : n = 4
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *

    return 0;
}