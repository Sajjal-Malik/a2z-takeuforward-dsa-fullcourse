#include <bits/stdc++.h>
using namespace std;

// *
// * *
// * * *
// * * * *
// * * * * *

void printRightAngledTrianglePattern(int n)
{
    // Outer loop controls the rows. It runs 'n' times (once for each row)
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns, iterating up to the current row number 'i'
        for (int j = 1; j <= i; j++)
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
    cout << "Enter the number of rows for the right-angled triangle pattern: ";
    cin >> n;

    printRightAngledTrianglePattern(n);

    return 0;
}