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

// Bubble sort --------------------------------
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool sorted = false;
        for (int j = 0; j < n - i - 1; j++) // loop run only unsorted elements
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = true;
            }
        }
        if (sorted == false)
        {
            break;
        }
    }
    printArray(arr, n);
}

// Selection sort --------------------------------
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    printArray(arr, n);
}

// Insertion sort --------------------------------
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > arr[prev + 1])
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
    }
    printArray(arr, n);
}

// Counting sort --------------------------------
void countingSort(int *arr, int n)
{
    int freq[10000] = {0};
    int minVal = INT16_MAX;
    int maxVal = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArray(arr, n);
}

int main()
{
    // Question 1 : Use the following sorting algorithms to sort an array in DESCENDING order :
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    countingSort(arr, n);
    return 0;
}