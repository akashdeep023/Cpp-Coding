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

// Max sum subarrays (BruteForce) --------------------------------
void printMaxSubArraySum(int *arr, int n) // O(n^3)
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

// Max sum subarrays (Optimize) --------------------------------
void printMaxSubArraySumOpt(int *arr, int n) // O(n^2)
{
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximum subarray sum Opt = " << maxSum << endl;
}

// Max sum subarrays (Kadane's Algorithm (DP)) --------------------------------
void printMaxSubArraySumKadane(int *arr, int n) // O(n)
{
    int maxSum = INT32_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) // Kadane Alogorithm
        {
            currSum = 0;
        }
    }
    cout << "Maximum subarray sum Kadane = " << maxSum << endl;
}

// Buy & sell Stocks --------------------------------
// void buyAndSell(int *arr, int n) //O(n^2) - 1st method (my)
// {
//     int maxProfit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] - arr[i] > maxProfit)
//             {
//                 maxProfit = arr[j] - arr[i];
//             }
//         }
//     }
//     cout << "Maximum Profite : " << maxProfit << endl;
// }
void buyAndSell(int *arr, int n) // O(2n) => O(n) - 2st method (mam)
{
    int buyStock[100000]; // Not define length in function (n)
    buyStock[0] = INT32_MAX;
    cout << "Buy Stock : " << buyStock[0] << ",";
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        buyStock[i] = min(buyStock[i - 1], arr[i - 1]);
        cout << buyStock[i] << ",";
    }
    for (int i = 0; i < n; i++)
    {
        int sellStock = arr[i] - buyStock[i];
        maxProfit = max(maxProfit, sellStock);
    }

    cout << endl
         << "Maximum Profite : " << maxProfit << endl;
}

void trapingRainwater(int *arr, int n) // TC -> O(n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = arr[0]; // in c++ (-infinite -4 = positive) -> due to bit calculation
    rightMax[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        rightMax[n - 1 - i] = max(rightMax[n - i], arr[n - i]); // calculate rightMax same loop
    }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     rightMax[i] = max(rightMax[i + 1], arr[i + 1]);          // calculate rightMax other loop
    //     cout << rightMax[i] << ",";
    // }
    int totalWaterTrap = 0;
    for (int i = 0; i < n; i++)
    {
        int currWaterTrap = min(leftMax[i], rightMax[i]) - arr[i];
        if (currWaterTrap > 0)
        {
            totalWaterTrap += currWaterTrap;
        }
    }
    cout << "Total Water Trap : " << totalWaterTrap << endl;
}

int main()
{
    // Print Subarrays --------------------------------
    // Subarrays is continuous part of an array
    int arrs[5] = {1, 2, 3, 4, 5}; // No of subarrays -> (n * (n + 1)) / 2 => (5 * 6) / 2 => 15
    int l = sizeof(arrs) / sizeof(int);
    cout << "Printing Subarrays" << endl;
    printSubArrays(arrs, l);

    // Max sum subarrays (BruteForce) --------------------------------
    int arr[6] = {2, -3, 6, -5, 4, 2};      // 7
    int arr1[6] = {-2, -3, -6, -5, -8, -2}; // -2
    int n = sizeof(arr) / sizeof(int);
    printMaxSubArraySum(arr, n);
    printMaxSubArraySum(arr1, n);
    cout << endl;

    // Max sum subarrays (Optimize) --------------------------------
    printMaxSubArraySumOpt(arr, n);
    printMaxSubArraySumOpt(arr1, n);
    cout << endl;

    // Max sum subarrays (Kadane's Algorithm (DP)) --------------------------------
    printMaxSubArraySumKadane(arr, n);
    printMaxSubArraySumKadane(arr1, n);
    cout << endl;

    // Buy & sell Stocks --------------------------------
    int stocks[6] = {7, 1, 5, 3, 6, 4};
    int stocks1[6] = {7, 6, 4, 3, 2, 1};
    int n1 = sizeof(stocks) / sizeof(int);
    buyAndSell(stocks, n1);
    buyAndSell(stocks1, n1);
    cout << endl;

    // Trapping Rainwater --------------------------------
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int height1[7] = {8, 7, 5, 4, 3, 2, 1};
    int n2 = sizeof(height) / sizeof(int);
    trapingRainwater(height, n2);
    trapingRainwater(height1, n2);
    cout << endl;

    return 0;
}