#include <iostream>
using namespace std;

void printSubArrays(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << "(" << i << "," << j << ")";
            for (int z = i; z <= j; z++) // find start (i) and end (j) index
            {
                cout << arr[z];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // Print Subarrays --------------------------------
    // Subarrays is continuous part of an array
    int arr[5] = {1, 2, 3, 4, 5}; // No of subarrays -> (n * (n + 1)) / 2 => (5 * 6) / 2 => 15
    int n = sizeof(arr) / sizeof(int);
    printSubArrays(arr, n);

    return 0;
}