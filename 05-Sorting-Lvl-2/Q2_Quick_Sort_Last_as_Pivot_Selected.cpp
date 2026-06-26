#include <bits/stdc++.h>
using namespace std;

/**
 * Partitioning function (Lomuto-Hoare hybrid)
 * Uses the right-most element as pivot
 */
int partition(int *arr, int low, int high)
{
    int pivotValue = arr[high]; // Right-most element as pivot
    int leftPointer = low;
    int rightPointer = high - 1; // Exclude pivot from scanning

    while (leftPointer <= rightPointer)
    {
        while (leftPointer <= rightPointer && arr[leftPointer] <= pivotValue)
        {
            leftPointer++;
        }

        while (rightPointer >= leftPointer && arr[rightPointer] > pivotValue)
        {
            rightPointer--;
        }

        if (leftPointer < rightPointer)
        {
            int temp = arr[leftPointer];
            arr[leftPointer] = arr[rightPointer];
            arr[rightPointer] = temp;
        }
    }

    // Place pivot in correct position
    int temp = arr[leftPointer];
    arr[leftPointer] = arr[high];
    arr[high] = temp;

    return leftPointer; // Return pivot index
}

/**
 * Recursive QuickSort function
 */
void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int numbers[] = {4, 2, 6, 5, 7, 9, 1, 3};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";

    quickSort(numbers, 0, n - 1);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";

    return 0;
}
