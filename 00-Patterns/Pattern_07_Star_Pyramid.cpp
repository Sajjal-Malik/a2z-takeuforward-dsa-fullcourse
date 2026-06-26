#include <bits/stdc++.h>
using namespace std;

//     *
//    ***
//   *****
//  *******
// *********

void starPyramidPattern(int n)
{
    // The outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {

        // First inner loop prints leading spaces to center the stars
        // The number of spaces decreases with each row.
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Second inner loop prints the stars.
        // The number of stars follows the sequence 1, 3, 5, 7... (2 * i - 1)
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        // (Optional) Third inner loop prints trailing spaces for perfect symmetry
        for (int j = 1; j <= n - i; j++)
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
    cout << "Enter the number of rows for the star pyramid pattern: ";
    cin >> n;

    starPyramidPattern(n);

    return 0;
}