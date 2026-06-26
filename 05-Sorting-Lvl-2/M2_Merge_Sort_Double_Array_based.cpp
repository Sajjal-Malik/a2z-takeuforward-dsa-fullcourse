#include <bits/stdc++.h>
using namespace std;

/*
    mergeSubarrays():
    Merges two sorted subarrays into one sorted range.

    First subarray  -> array[startIndex ... middleIndex]
    Second subarray -> array[middleIndex + 1 ... endIndex]
*/
void mergeSubarrays(int array[], int startIndex, int middleIndex, int endIndex)
{
    int leftSize = middleIndex - startIndex + 1; // Size of left subarray
    int rightSize = endIndex - middleIndex;      // Size of right subarray

    // Temporary arrays for merging
    vector<int> leftArray(leftSize);
    vector<int> rightArray(rightSize);

    // Copy data into left temporary array
    for (int i = 0; i < leftSize; i++)
        leftArray[i] = array[startIndex + i];

    // Copy data into right temporary array
    for (int j = 0; j < rightSize; j++)
        rightArray[j] = array[middleIndex + 1 + j];

    int leftIndex = 0;            // index for leftArray
    int rightIndex = 0;           // index for rightArray
    int mergedIndex = startIndex; // index for merged result in original array

    // Merge the temporary arrays back into original array
    while (leftIndex < leftSize && rightIndex < rightSize)
    {
        if (leftArray[leftIndex] <= rightArray[rightIndex])
        {
            array[mergedIndex] = leftArray[leftIndex];
            leftIndex++;
        }
        else
        {
            array[mergedIndex] = rightArray[rightIndex];
            rightIndex++;
        }
        mergedIndex++;
    }

    // Copy remaining elements from left array
    while (leftIndex < leftSize)
    {
        array[mergedIndex] = leftArray[leftIndex];
        leftIndex++;
        mergedIndex++;
    }

    // Copy remaining elements from right array
    while (rightIndex < rightSize)
    {
        array[mergedIndex] = rightArray[rightIndex];
        rightIndex++;
        mergedIndex++;
    }
}

/*
    mergeSortRecursive():
    Recursively divides the array and sorts it using merge sort.
*/
void mergeSortRecursive(int array[], int startIndex, int endIndex)
{
    if (startIndex >= endIndex)
        return; // base case

    int middleIndex = startIndex + (endIndex - startIndex) / 2;

    mergeSortRecursive(array, startIndex, middleIndex);       // sort left half
    mergeSortRecursive(array, middleIndex + 1, endIndex);     // sort right half
    mergeSubarrays(array, startIndex, middleIndex, endIndex); // merge sorted halves
}

// Prints the array elements
void printArray(const int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int numbers[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array:\n";
    printArray(numbers, size);

    mergeSortRecursive(numbers, 0, size - 1);

    cout << "Sorted array:\n";
    printArray(numbers, size);

    return 0;
}
