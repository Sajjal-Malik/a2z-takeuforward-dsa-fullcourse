#include <bits/stdc++.h>
using namespace std;

/**
 * Partitioning function (Hoare-like scheme)
 * Rearranges elements so that items smaller than the pivot are on the left,
 * and items larger than the pivot are on the right.
 */
int partition(int *arr, int low, int high)
{
    int pivotValue = arr[low]; // Pick the first element as the pivot
    int leftPointer = low;
    int rightPointer = high;

    while (leftPointer < rightPointer)
    {
        // Move leftPointer until element greater than pivot is found
        while (arr[leftPointer] <= pivotValue && leftPointer <= high - 1)
        {
            leftPointer++;
        }

        // Move rightPointer until element smaller than or equal to pivot is found
        while (arr[rightPointer] > pivotValue && rightPointer >= low + 1)
        {
            rightPointer--;
        }

        // Swap out-of-place elements if pointers haven't crossed
        if (leftPointer < rightPointer)
        {
            int temp = arr[leftPointer];
            arr[leftPointer] = arr[rightPointer];
            arr[rightPointer] = temp;
        }
    }

    // Place pivot in its correct position
    int temp = arr[low];
    arr[low] = arr[rightPointer];
    arr[rightPointer] = temp;

    return rightPointer; // Return pivot index
}

/**
 * Recursive QuickSort function
 */
void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high); // Partition array
        quickSort(arr, low, pivotIndex - 1);        // Sort left sub-array
        quickSort(arr, pivotIndex + 1, high);       // Sort right sub-array
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
