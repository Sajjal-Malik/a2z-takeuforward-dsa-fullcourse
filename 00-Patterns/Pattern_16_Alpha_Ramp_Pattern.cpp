#include <bits/stdc++.h>
using namespace std;

// A
// B B
// C C C
// D D D D
// E E E E E

void alphaRamprTrianglePattern(int n)
{
    char character = 'A';

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {

        // Print the same character multiple times in the current row
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
        }

        // Move to the next line
        cout << endl;
        // Increment the character for the next row
        character++;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Alpha Ramp Triangle pattern: ";
    cin >> n;

    alphaRamprTrianglePattern(n);

    return 0;
}
