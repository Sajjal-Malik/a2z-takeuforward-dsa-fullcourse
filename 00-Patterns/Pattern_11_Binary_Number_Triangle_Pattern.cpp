#include <bits/stdc++.h>
using namespace std;

// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

void binaryNumberPyramidPattern(int n)
{
    // Variable to hold the starting digit (0 or 1) for a row
    int start = 1;

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {
        // Determine the starting digit for the current row based on its parity
        // Even rows start with 1, odd rows start with 0.
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        // Inner loop controls the columns (numbers printed). It runs 'i' times
        for (int j = 1; j <= i; j++)
        {
            cout << start << " "; // Print the current number
            start = 1 - start;    // Toggle the number for the next position (0 <-> 1)
        }

        cout << endl; // Move to the next line
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Binary Number pyramid pattern: ";
    cin >> n;

    binaryNumberPyramidPattern(n);

    return 0;
}
