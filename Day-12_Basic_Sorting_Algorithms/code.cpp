#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
void bubbleSort(int *arr, int n) // TC -> O(n^2)
{
    for (int i = 0; i < n - 1; i++) // last element allready sorted
    {
        bool isSort = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // condition symbol '>'  => accending order || condition symbol '<' => decending order
            {
                // int temp = arr[j];  // menually swap
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]); // inbuild method
                isSort = true;
            }
        }
        if (!isSort && i == 1)
        {
            cout << "Allready sorted" << endl;
            return;
        }
    }
    cout << "Bubble sort : ";
    printArray(arr, n);
}

void selectionSort(int *arr, int n) // TC -> O(n^2)
{
    for (int i = 0; i < n - 1; i++) // last element allready sorted
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) // loop for find min element index
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    cout << "Selection sort : ";
    printArray(arr, n);
}

void insertionSort(int *arr, int n) // TC -> O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > curr)
        {
            arr[j + 1] = arr[j];
            // swap(arr[j], arr[j + 1]);
            j--;
        }
        arr[j + 1] = curr; // why is this line needed? -> arr[j + 1] = arr[j]; if you use it then write this line other NO
        printArray(arr, n);
    }
    cout << "Insertion sort : ";
    printArray(arr, n);
}
// Outer loop changes
// {5, 4, 1, 3, 2} -> length => n => 5
// {4, 5, 1, 3, 2} -> i = 1
// {1, 4, 5, 3, 2} -> i = 2
// {1, 3, 4, 5, 2} -> i = 3
// {1, 2, 3, 4, 5} -> i = 4

void countingSort(int *arr, int n) //  TC -> O(n + range)
{
    int freq[10000] = {0}; // range
    int minVal = INT16_MAX, maxVal = INT16_MIN;
    for (int i = 0; i < n; i++) // TC => O(n)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for (int i = minVal, j = 0; i <= maxVal; i++) // TC => O(range) -> max - min
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    // printArray(freq, n);

    cout << "Counting sort : ";
    printArray(arr, n);
}

int main()
{
    // Bubble Sort --------------------------------
    // Idea -> large elements come to end by swapping with adjacents.
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    // bubbleSort(arr, n);   // accending order
    // bubbleSort(arr2, n2); // accending order -> Allready sorted
    // cout << endl;

    // Selection Sort --------------------------------
    // Idea -> Pick the smallest (from unsorted) & put in the beginning.
    // selectionSort(arr, n);
    // cout << endl;

    // Insertion sort --------------------------------
    // Idea -> Pick an element from unsorted part & place it correctly in sorted part.
    // insertionSort(arr, n);

    // Counting sort -------------------------------- (Min range number)
    // Idea -> Use a frequency count of elements from min to max.
    int count[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int nc = sizeof(count) / sizeof(int);
    countingSort(count, nc);

    return 0;
}