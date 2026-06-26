#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of elements
    int totalElements;
    cin >> totalElements;

    int numbers[totalElements];

    // Input elements
    for (int i = 0; i < totalElements; i++)
    {
        cin >> numbers[i];
    }

    // Fixed-size hash array (values assumed from 0 to 12)
    int frequencyHash[13] = {0};

    // Pre-computation
    for (int i = 0; i < totalElements; i++)
    {
        frequencyHash[numbers[i]]++;
    }

    // Query phase
    int queryCount;
    cin >> queryCount;

    while (queryCount--)
    {
        int queryValue;
        cin >> queryValue;

        cout << frequencyHash[queryValue] << endl;
    }

    return 0;
}
