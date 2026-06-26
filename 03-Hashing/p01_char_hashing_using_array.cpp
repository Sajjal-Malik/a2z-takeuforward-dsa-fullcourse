#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input string containing only lowercase letters (a–z)
    string inputString;
    cout << "Enter a string (lowercase letters only): ";
    cin >> inputString;

    // Hash array to store frequency of each character
    // Index 0 → 'a', 1 → 'b', ..., 25 → 'z'
    int frequency[26] = {0};

    // Pre-computation: count frequency of each character
    for (int i = 0; i < inputString.size(); i++)
    {
        frequency[inputString[i] - 'a']++;
    }

    // Query phase
    int queryCount;
    cout << "Enter the number of characters you want to query: ";
    cin >> queryCount;

    while (queryCount--)
    {
        char queryChar;
        cout << "Enter character: ";
        cin >> queryChar;

        cout << "Frequency of '" << queryChar << "' = "
             << frequency[queryChar - 'a'] << endl;
    }

    return 0;
}
