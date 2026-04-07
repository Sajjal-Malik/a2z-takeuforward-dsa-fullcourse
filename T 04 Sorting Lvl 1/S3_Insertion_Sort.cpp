#include <bits/stdc++.h>
using namespace std;

/*
    Insertion Sort (Shift-based approach)
    ------------------------------------
    This version matches the VISUAL and TEXTBOOK explanation.

    Idea:
    - Pick one element as "key"
    - Shift all larger elements one position to the right
    - Insert the key in the created gap
*/
void insertionSortShift(int numbers[], int totalElements)
{
    for (int currentIndex = 1; currentIndex < totalElements; currentIndex++)
    {
        int keyValue = numbers[currentIndex];
        int previousIndex = currentIndex - 1;

        // Shift elements greater than keyValue to the right
        while (previousIndex >= 0 && numbers[previousIndex] > keyValue)
        {
            numbers[previousIndex + 1] = numbers[previousIndex];
            previousIndex--;
        }

        // Insert keyValue at its correct position
        numbers[previousIndex + 1] = keyValue;
    }
}

/*
    Insertion Sort (Swap-based approach)
    -----------------------------------
    This version repeatedly swaps adjacent elements
    until the current element reaches its correct position.

*/
void insertionSortSwap(int numbers[], int totalElements)
{
    for (int currentIndex = 1; currentIndex < totalElements; currentIndex++)
    {
        int previousIndex = currentIndex;

        // Swap backwards until element is placed correctly
        while (previousIndex > 0 && numbers[previousIndex - 1] > numbers[previousIndex])
        {
            swap(numbers[previousIndex], numbers[previousIndex - 1]);
            previousIndex--;
        }
    }
}

// Utility function to print array
void printArray(int numbers[], int totalElements)
{
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

int main()
{
    int originalArray[] = {13, 46, 24, 52, 20, 9};
    int totalElements = sizeof(originalArray) / sizeof(originalArray[0]);

    // Create copies so both algorithms work on same data
    int shiftArray[totalElements];
    int swapArray[totalElements];

    copy(originalArray, originalArray + totalElements, shiftArray);
    copy(originalArray, originalArray + totalElements, swapArray);

    cout << "Original Array: ";
    printArray(originalArray, totalElements);

    insertionSortShift(shiftArray, totalElements);
    cout << "After Shift-based Insertion Sort: ";
    printArray(shiftArray, totalElements);

    insertionSortSwap(swapArray, totalElements);
    cout << "After Swap-based Insertion Sort: ";
    printArray(swapArray, totalElements);

    return 0;
}
