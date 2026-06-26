#include <bits/stdc++.h>
using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

void hollowRectanglePattern(int n)
{
    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // Check if the current position is on the border
            if (i == 1 || j == 1 || i == n || j == n)
                cout << "*";
            else
                cout << " ";
        }

        // Move to the next line
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the square (number of rows/columns): ";
    cin >> n;

    hollowRectanglePattern(n);

    return 0;
}
