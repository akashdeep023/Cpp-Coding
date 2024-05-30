#include <iostream>
using namespace std;

void spiral(int matrix[][4], int n, int m)
{
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << matrix[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << matrix[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow) // matrix odd row then middle part allready print in top loop
            {
                break;
            }
            cout << matrix[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol) // matrix odd col then middle part allready print in right loop
            {
                break;
            }
            cout << matrix[i][scol] << " ";
        }
        srow++, scol++;
        erow--, ecol--;
    }
    cout << endl;
}

void diagonalSum(int matrix[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // Primary diagonal
        if (i != n - i - 1)  // Comman cell in PD & SD (Odd matrix)
        {
            sum += matrix[i][n - i - 1]; // Secondary diagonal
        }
    }
    cout << "Diagonal Sum : " << sum << endl;
}

// Bruteforce search (TC -> O(n*m))
bool searchMatrix(int arr[][4], int n, int m, int key) // Sorted ya Unsorted 2D array No Matter
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Cell index : (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Key is not found" << endl;
    return false;
}
// Binary search row wise (TC -> O(n * log m)) ya col wise (TC -> O(m * log n))
bool searchMatrix2(int arr[][4], int n, int m, int key) // 2D array row wise Sorted
{
    for (int i = 0; i < n; i++) // row wise search
    {
        int start = 0, end = m - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2; // mid point
            if (arr[i][mid] == key)
            {
                cout << "Cell index : (" << i << ", " << mid << ")" << endl;
                return true;
            }
            else if (arr[i][mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    cout << "Key is not found" << endl;
    return false;
}
// Staircase search (TC -> O(n+m))
bool searchMatrix3(int arr[][4], int n, int m, int key) // 2D array row wise and col wise sorted
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "Cell index : (" << i << ", " << j << ")" << endl;
            return true;
        }
        else if (arr[i][j] > key) // left side move
        {
            j--;
        }
        else // down side move
        {
            i++;
        }
    }
    cout << "Key is not found" << endl;
    return false;
}
int main()
{
    // Creating 2D array --------------------------------
    int students[3][3] = {{81, 62, 53}, // rows & columns
                          {74, 65, 96},
                          {67, 88, 99}};
    // cout << students[1][1] << endl; // 65
    // cout << students[2][1] << endl; // 88

    // Input & Output 2D array --------------------------------
    int arr[3][4];
    // input 2D array ---
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "arr[" << i << "][" << j << "]: ";
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << endl;
    // output 2D array ---
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << ", ";
    //     }
    // }

    // 2D array in memory --------------------------------
    // A 2D array is represented as a contiguous block of memory cells (Linearly).
    // Row mojor
    // 1st row then 2nd row ..... so on

    // Column mojor
    // 1st column then 2nd column ..... so on

    // Spiral Matrix --------------------------------
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    int matrix2[3][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12}};

    // spiral(matrix, 4, 4);
    // spiral(matrix2, 3, 4);

    // Diagonal Sum --------------------------------
    int matrix3[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    // diagonalSum(matrix, 4);
    // diagonalSum(matrix3, 3);

    // Search in Sorted matrix --------------------------------
    // Search for a key in row wise and col wise sorted matrix
    int sortMatrix[4][4] = {{10, 20, 30, 40},
                            {15, 25, 35, 45},
                            {27, 29, 37, 48},
                            {32, 33, 39, 50}};
    int key = 50;
    cout << "Search key (Bruteforce) : " << searchMatrix(sortMatrix, 4, 4, key) << endl;
    cout << "Search key (Binary Search) : " << searchMatrix2(sortMatrix, 4, 4, key) << endl;
    cout << "Search key (Staircase Search) : " << searchMatrix3(sortMatrix, 4, 4, key) << endl;

    return 0;
}