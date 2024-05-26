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
    for (int i = 0; i < n - 1; i++)
    {
        bool isSort = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // condition symbol >  => accending order || condition symbol < => decending order
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
                isSort = true;
            }
        }
        if (!isSort && i == 1)
        {
            cout << "Allready sorted";
            return;
        }
    }
    printArray(arr, n);
}
int main()
{
    // Bubble Sort --------------------------------
    // Idea -> large elements come to end by swapping with adjacents.
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n); // accending order
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, n2); // accending order -> Allready sorted

    return 0;
}