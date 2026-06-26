#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of elements
    int totalElements;
    cin >> totalElements;

    int numbers[totalElements];

    // Input array elements
    for (int i = 0; i < totalElements; i++)
    {
        cin >> numbers[i];
    }

    // Map for storing frequency
    map<int, int> frequencyMap;

    // Pre-computation
    for (int i = 0; i < totalElements; i++)
    {
        frequencyMap[numbers[i]]++;
    }

    // Display all frequencies
    for (auto &entry : frequencyMap)
    {
        cout << entry.first << " -> " << entry.second << endl;
    }

    // Query phase
    int queryCount;
    cout << "Enter number of queries: ";
    cin >> queryCount;

    while (queryCount--)
    {
        int queryNumber;
        cin >> queryNumber;

        cout << frequencyMap[queryNumber] << endl;
    }

    return 0;
}
