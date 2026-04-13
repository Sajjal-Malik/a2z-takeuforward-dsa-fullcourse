#include <bits/stdc++.h>
using namespace std;

/*
    Insertion Sort (Swap-based approach)
    -----------------------------------
    This version repeatedly swaps adjacent elements
    until the current element reaches its correct position.

*/
void insertionSort(int numbers[], int totalElements)
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

    cout << "Original Array: ";
    printArray(originalArray, totalElements);

    insertionSort(originalArray, totalElements);
    cout << "After Insertion Sort: ";
    printArray(swapArray, totalElements);

    return 0;
}
