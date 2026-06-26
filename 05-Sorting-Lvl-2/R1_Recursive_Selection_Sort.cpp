#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Selection Sort using recursion.
 * Finds the minimum element in the unsorted part and moves it to the current position.
 */
void recursiveSelectionSort(int array[], int size, int currentIndex)
{
    if (currentIndex >= size - 1)
        return; // Base case: last element

    int minIndex = currentIndex; // Assume current element is minimum

    // Find the actual minimum in the unsorted portion
    for (int i = currentIndex + 1; i < size; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }

    // Swap minimum element with current element
    int temp = array[minIndex];
    array[minIndex] = array[currentIndex];
    array[currentIndex] = temp;

    recursiveSelectionSort(array, size, currentIndex + 1); // Recurse for remaining array
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    recursiveSelectionSort(numbers, size, 0);

    cout << "\nAfter Sorting: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}
