#include <bits/stdc++.h>
using namespace std;

// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

void symmetricalButterflyPattern(int n)
{
    int spaces = 2 * n - 2;

    // Upper half (including the widest middle line)
    for (int i = 1; i <= n; i++)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= spaces; j++)
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

    // Lower half
    spaces = 2; // Reset spaces to start from bottom's top line

    for (int i = n - 1; i >= 1; i--)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
        spaces += 2;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows for the Symmetrical Butterfly Void Pattern: ";
    cin >> n;

    symmetricalButterflyPattern(n);

    return 0;
}
