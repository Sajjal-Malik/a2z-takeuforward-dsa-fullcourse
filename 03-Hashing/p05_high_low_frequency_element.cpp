#include <bits/stdc++.h>
using namespace std;

// Function to analyze frequency of elements
void analyzeFrequency(int array[], int size)
{
    // Hash table to store frequency of each element
    unordered_map<int, int> frequencyMap;

    // Pre-computation
    for (int i = 0; i < size; i++)
    {
        frequencyMap[array[i]]++;
    }

    int maxFrequency = 0;
    int minFrequency = size;
    int maxElement = 0;
    int minElement = 0;

    // Analyze frequencies
    for (auto &entry : frequencyMap)
    {
        int element = entry.first;
        int count = entry.second;

        if (count > maxFrequency)
        {
            maxFrequency = count;
            maxElement = element;
        }

        if (count < minFrequency)
        {
            minFrequency = count;
            minElement = element;
        }
    }

    // Output results
    cout << "Highest frequency element: " << maxElement
         << " (Count: " << maxFrequency << ")\n";
    cout << "Lowest frequency element: " << minElement
         << " (Count: " << minFrequency << ")\n";
}

int main()
{
    int dataArray[] = {10, 5, 10, 15, 10, 5, 10, 5};
    int arraySize = sizeof(dataArray) / sizeof(dataArray[0]);

    analyzeFrequency(dataArray, arraySize);

    return 0;
}
