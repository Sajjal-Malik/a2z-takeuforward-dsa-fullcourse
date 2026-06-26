#include <bits/stdc++.h>
using namespace std;

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

/**
 * Prints the top half (a standard centered pyramid) of the diamond pattern
 */
void starPyramidPattern(int n)
{
    // Loops through each row for the top half.
    for (int i = 1; i <= n; i++)
    {
        // Prints leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Prints stars (1, 3, 5, etc.).
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        // Prints trailing spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Prints a newline after the row is done
        cout << endl;
    }
}

/**
 * Prints the bottom half (an inverted centered pyramid) of the diamond pattern
 */
void invertedStarPyramidPattern(int n)
{
    // Loops through each row for the bottom half
    for (int i = 1; i <= n; i++)
    {

        // Prints leading spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // Prints stars (total 2*n - (2*i - 1))
        for (int j = 1; j <= 2 * n - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // Prints trailing spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // Prints a newline after the row is done
        cout << endl;
    }
}

/**
 * Combines the top and bottom halves to print a complete diamond pattern
 */
void diamondStarPyramidPattern(int n)
{
    starPyramidPattern(n);
    invertedStarPyramidPattern(n);
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Diamond star pyramid pattern: ";
    cin >> n;

    diamondStarPyramidPattern(n);

    return 0;
}