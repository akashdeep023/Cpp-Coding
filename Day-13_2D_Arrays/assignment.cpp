#include <iostream>
using namespace std;

void numOfElem(int arr[][3], int n, int m, int elem)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == elem)
            {
                count++;
            }
        }
    }
    cout << "Count of " << elem << " is = " << count << endl;
}

int main()
{
    // Question 1 : Print the number of all 7’s that are in the 2d array.
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    int n = 2, m = 3;
    int elem = 7;
    numOfElem(arr, n, m, elem); // 2

    // Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += nums[1][i];
    }
    cout << "Sum of second row is = " << sum << endl;

    // Question 3 : Write a program to Find Transpose of a Matrix.
    // Transpose of a matrix is the process of swapping the rows to columns.
    int matrix[2][3] = {{2, 3, 7}, {5, 6, 7}};
    int transpose[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of matrix is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}