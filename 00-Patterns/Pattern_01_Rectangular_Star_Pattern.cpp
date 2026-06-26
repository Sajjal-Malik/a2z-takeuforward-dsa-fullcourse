#include <bits/stdc++.h>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

void printRectangularStarPattern(int n)
{
    // Outer loop controls the rows. It runs 'n' times (once for each row)
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns, iterating up to the size of array 'n'
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        // Move to the next line after each row is complete
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the rectangular start pattern: ";
    cin >> n;

    printRectangularStarPattern(n);

    return 0;
}