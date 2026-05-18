#include <bits/stdc++.h>
using namespace std;

/*
    mergeSortedRanges():
    Merges two sorted ranges inside a vector.

    Left range  -> array[startIndex ... middleIndex]
    Right range -> array[middleIndex + 1 ... endIndex]
*/
void mergeSortedRanges(vector<int> &array, int startIndex, int middleIndex, int endIndex)
{
    vector<int> mergedResult; // Temporary vector to store merged elements

    int leftPointer = startIndex;       // pointer for left half
    int rightPointer = middleIndex + 1; // pointer for right half

    // Merge both halves while elements remain
    while (leftPointer <= middleIndex && rightPointer <= endIndex)
    {
        if (array[leftPointer] <= array[rightPointer])
        {
            mergedResult.push_back(array[leftPointer]);
            leftPointer++;
        }
        else
        {
            mergedResult.push_back(array[rightPointer]);
            rightPointer++;
        }
    }

    // Copy remaining elements from left half
    while (leftPointer <= middleIndex)
    {
        mergedResult.push_back(array[leftPointer]);
        leftPointer++;
    }

    // Copy remaining elements from right half
    while (rightPointer <= endIndex)
    {
        mergedResult.push_back(array[rightPointer]);
        rightPointer++;
    }

    // Copy merged result back to original vector
    for (int i = startIndex; i <= endIndex; i++)
    {
        array[i] = mergedResult[i - startIndex];
    }
}

/*
    mergeSortRecursive():
    Recursively sorts the vector using merge sort.
*/
void mergeSortRecursive(vector<int> &array, int startIndex, int endIndex)
{
    if (startIndex >= endIndex)
        return; // base case

    int middleIndex = startIndex + (endIndex - startIndex) / 2;

    mergeSortRecursive(array, startIndex, middleIndex);          // sort left half
    mergeSortRecursive(array, middleIndex + 1, endIndex);        // sort right half
    mergeSortedRanges(array, startIndex, middleIndex, endIndex); // merge sorted halves
}

int main()
{
    vector<int> numbers = {4, 3, 8, 5, 6, 7, 6, 2, 1, 5};

    cout << "Before sorting:\n";
    for (int value : numbers)
        cout << value << " ";

    mergeSortRecursive(numbers, 0, numbers.size() - 1);

    cout << "\nSorted array:\n";
    for (int value : numbers)
        cout << value << " ";

    return 0;
}
