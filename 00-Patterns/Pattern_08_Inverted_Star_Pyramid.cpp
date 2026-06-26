#include <bits/stdc++.h>
using namespace std;

// *********
//  *******
//   *****
//    ***
//     *

void invertedStarPyramidPattern(int n)
{
    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {
        // First inner loop prints leading spaces.
        // The number of spaces increases with each row (i - 1)
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // Second inner loop prints the stars.
        // The number of stars decreases in each row. The total number of stars is 2*n - (2*i - 1)
        for (int j = 1; j <= 2 * n - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // (Optional) Third inner loop prints trailing spaces for symmetry
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // Move to the next line after the row is complete
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the inverted star pyramid pattern: ";
    cin >> n;

    invertedStarPyramidPattern(n);

    return 0;
}
