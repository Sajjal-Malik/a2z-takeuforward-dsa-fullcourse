#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Bubble Sort using recursion.
 * Each pass moves the largest unsorted element to its correct position.
 */
void recursiveBubbleSort(int array[], int size, int passIndex)
{
    if (passIndex >= size - 1)
        return; // Base case: all passes completed

    // Compare adjacent elements in the current pass
    for (int i = 0; i < size - passIndex - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }

    recursiveBubbleSort(array, size, passIndex + 1); // Recurse for next pass
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    recursiveBubbleSort(numbers, size, 0);

    cout << "\nAfter Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}
