#include <iostream>
using namespace std;
void printArray(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void insertionSort(char *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (arr[prev] < curr && prev >= 0)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    printArray(arr, n);
}
int main()
{
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(ch[0]);
    insertionSort(ch, n);

    return 0;
}