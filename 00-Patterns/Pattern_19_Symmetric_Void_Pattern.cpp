#include <bits/stdc++.h>
using namespace std;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

void symmetricalVoidPattern(int n)
{
    int spaces = 0;

    // Top half of the pattern
    for (int i = 1; i <= n; i++)
    {

        // Left stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
        spaces += 2;
    }

    spaces = 2 * n - 2;

    // Bottom half of the pattern
    for (int i = 1; i <= n; i++)
    {

        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
        spaces -= 2;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows for the Symmetrical Void Pattern (per half): ";
    cin >> n;

    symmetricalVoidPattern(n);

    return 0;
}
