#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input string (can include any character)
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    // Map to store character frequencies
    map<char, int> charFrequency;

    // Pre-computation: count each character
    for (int i = 0; i < inputString.size(); i++)
    {
        charFrequency[inputString[i]]++;
    }

    // Display all character frequencies
    cout << "Character frequencies:\n";
    for (auto &entry : charFrequency)
    {
        cout << entry.first << " -> " << entry.second << endl;
    }

    // Query phase
    int queryCount;
    cout << "Enter number of queries: ";
    cin >> queryCount;

    while (queryCount--)
    {
        char queryChar;
        cout << "Enter character to search: ";
        cin >> queryChar;

        cout << "Frequency of '" << queryChar << "' = "
             << charFrequency[queryChar] << endl;
    }

    return 0;
}
