#include <iostream>
using namespace std;

// Question 1 --------------------
bool containDuplicates(int *arr, int n) // TC -> O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                // break;
            }
            else if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

// Question 2 --------------------
int Search(int *nums, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// Question 3 --------------------
int maxProduct(int *arr, int n)
{
    int maxProd = INT32_MIN;
    int currProd = 1;
    for (int i = 0; i < n; i++)
    {
        currProd *= arr[i];
        maxProd = max(maxProd, currProd);
        if (currProd < 0) // Kadane Alogorithm
        {
            currProd = 1;
        }
    }
    return maxProd;
}
int main()
{
    // Easy
    // Question 1 : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
    int nums1[4] = {1, 2, 3, 4}; // false => 0
    int n1 = sizeof(nums1) / sizeof(int);
    int nums2[10] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}; // true => 1
    int n2 = sizeof(nums2) / sizeof(int);
    cout << "Check element is cuplicate : " << containDuplicates(nums1, n1) << endl;
    cout << "Check element is cuplicate : " << containDuplicates(nums2, n2) << endl;
    cout << endl;

    // Medium
    // Question 2 : There is an integer array nums sorted in ascending order (with distinct values).
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int target = 0;
    int target1 = 3;
    cout << "No 0 is exist in array index : " << Search(arr, n, target) << endl;
    cout << "No 3 is exist in array index : " << Search(arr, n, target1) << endl;
    cout << endl;

    // Medium -> Note - This Qs might feel difficult as a beginner because it uses DP approach.
    // Question 3 : Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer
    int arr1[] = {2, 3, -2, 4};
    int nr = sizeof(arr1) / sizeof(int);
    int arr2[] = {-2, 0, -1};
    int nr2 = sizeof(arr2) / sizeof(int);
    cout << "Max Product : " << maxProduct(arr1, nr) << endl;
    cout << "Max Product : " << maxProduct(arr2, nr2) << endl;

    return 0;
}