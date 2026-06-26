#include <bits/stdc++.h>
using namespace std;

/*
    Function: reverseArrayTwoPointer
    Purpose : Reverses an array in-place using recursion
*/
void reverseArrayTwoPointer(int arr[], int left, int right)
{
    // Base case
    if (left > right)
        return;

    // Simple swapping logic
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // Recursive steps
    reverseArrayTwoPointer(arr, left + 1, right - 1);
}

/*
    Function: reverseArraySinglePointerOptimal
    Purpose : Reverses an array in-place using recursion
*/
void reverseArraySinglePointerOptimal(int leftIndex, int arr[], int size)
{
    // Base case: stop when middle is reached
    if (leftIndex >= size / 2)
        return;

    // Swap symmetric elements
    swap(arr[leftIndex], arr[size - leftIndex - 1]);

    // Recursive call moving inward
    reverseArraySinglePointerOptimal(leftIndex + 1, arr, size);
}

int main()
{
    int arr[] = {2, 5, 7, 3, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverseArraySinglePointerOptimal(0, arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
