#include <bits/stdc++.h>
using namespace std;

// * * * * *
// * * * *
// * * *
// * *
// *

void invertedRightPyramidPattern(int n)
{
    // Outer loop controls the rows. It runs 'n' times (once for each row)
    for (int i = 1; i <= n; i++)
    {
        // Inner loop controls the columns (numbers printed in the current row
        // 'n - i + 1 times'
        for (int j = 1; j <= n - i + 1; j++)
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
    cout << "Enter the number of rows for the inverted right pyramid pattern: ";
    cin >> n;

    invertedRightPyramidPattern(n);

    return 0;
}