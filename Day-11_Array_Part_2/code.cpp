#include <iostream>
using namespace std;

void printSubArrays(int *arr, int n) // TC -> O(n^3)
{
    for (int i = 0; i < n; i++) // i => Starting index of subarray
    {
        for (int j = i; j < n; j++) // j => Ending index of subarray
        {
            // cout << "(" << i << "," << j << ")";
            for (int z = i; z <= j; z++) // find start (i) and end (j) index
            {
                cout << arr[z];
            }
            cout << ", ";
        }
        cout << endl;
    }
    cout << endl;
}

void printMaxSubArraySum(int *arr, int n)
{
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int z = i; z <= j; z++)
            {
                currSum += arr[z];
            }
            // if (currSum > maxSum)
            // {
            //     maxSum = currSum;
            // }
            maxSum = max(maxSum, currSum); // inbuild max calculation method
        }
    }
    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main()
{
    // Print Subarrays --------------------------------
    // Subarrays is continuous part of an array
    // int arr[5] = {1, 2, 3, 4, 5}; // No of subarrays -> (n * (n + 1)) / 2 => (5 * 6) / 2 => 15
    // int n = sizeof(arr) / sizeof(int);
    // printSubArrays(arr, n);

    // Max sum subarrays (BruteForce) --------------------------------
    // int arr[6] = {2, -3, 6, -5, 4, 2};
    int arr[6] = {-2, -3, -6, -5, -8, -2};
    int n = sizeof(arr) / sizeof(int);
    printMaxSubArraySum(arr, n);

    return 0;
}