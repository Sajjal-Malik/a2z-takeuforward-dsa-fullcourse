#include <bits/stdc++.h>
using namespace std;

/*
    Selection Sort Algorithm
    ------------------------
    This algorithm divides the array into two parts:
    1. Sorted part (from the beginning)
    2. Unsorted part (remaining elements)

    In each pass, the smallest element from the unsorted part
    is selected and placed at the correct position in the sorted part.
*/
void selectionSort(int numbers[], int totalElements)
{
    // Loop to move the boundary of the sorted part
    for (int currentPosition = 0; currentPosition < totalElements - 1; currentPosition++)
    {
        // Assume the first element of unsorted part is the smallest
        int minimumIndex = currentPosition;

        // Find the smallest element in the unsorted part
        for (int checkIndex = currentPosition + 1; checkIndex < totalElements; checkIndex++)
        {
            if (numbers[checkIndex] < numbers[minimumIndex])
            {
                minimumIndex = checkIndex;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        int temp = numbers[minimumIndex];
        numbers[minimumIndex] = numbers[currentPosition];
        numbers[currentPosition] = temp;
    }
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int totalElements = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    selectionSort(numbers, totalElements);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    return 0;
}
