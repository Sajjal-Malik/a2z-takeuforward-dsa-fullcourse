#include <bits/stdc++.h>
using namespace std;

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void halfDiamondStarPyramidPattern(int n)
{
    // The pattern has 2*n - 1 total rows in total
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // Determine how many stars to print for the current row 'i'
        int stars = i;

        // If 'i' is greater than 'n' (we are in the bottom half of the diamond),
        // adjust the number of stars to decrease back towards 1
        if (i > n)
            stars = 2 * n - i;

        // Print the required number of stars for this row
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // Move to the next line after the row is complete
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Half Diamond star pyramid pattern: ";
    cin >> n;

    halfDiamondStarPyramidPattern(n);

    return 0;
}
