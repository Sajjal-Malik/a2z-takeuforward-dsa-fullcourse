#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Insertion Sort using recursion.
 * Inserts each element into its correct position within the sorted portion.
 */
void recursiveInsertionSort(int array[], int size, int step)
{
    if (step >= size)
        return; // Base case: all elements processed

    int keyIndex = step; // Current element to insert

    // Shift elements to insert current element
    while (keyIndex > 0 && array[keyIndex - 1] > array[keyIndex])
    {
        int temp = array[keyIndex];
        array[keyIndex] = array[keyIndex - 1];
        array[keyIndex - 1] = temp;

        keyIndex--;
    }

    recursiveInsertionSort(array, size, step + 1); // Recurse for next element
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    recursiveInsertionSort(numbers, size, 1); // Start from index 1

    cout << "\nAfter Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}
