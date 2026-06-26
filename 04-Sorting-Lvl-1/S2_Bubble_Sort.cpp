#include <bits/stdc++.h>
using namespace std;

/*
    Bubble Sort Algorithm
    ---------------------
    Bubble Sort repeatedly compares adjacent elements
    and swaps them if they are in the wrong order.

    After each pass, the largest element "bubbles"
    to the end of the array.
*/
void bubbleSort(int numbers[], int totalElements)
{
    // Controls number of passes
    for (int passingIndex = totalElements - 1; passingIndex > 0; passingIndex--)
    {
        // Compare adjacent elements
        for (int checkIndex = 0; checkIndex < passingIndex; checkIndex++)
        {
            if (numbers[checkIndex] > numbers[checkIndex + 1])
            {
                // Swap if elements are in wrong order
                int temp = numbers[checkIndex];
                numbers[checkIndex] = numbers[checkIndex + 1];
                numbers[checkIndex + 1] = temp;
            }
        }
    }
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int totalElements = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    bubbleSort(numbers, totalElements);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    return 0;
}
