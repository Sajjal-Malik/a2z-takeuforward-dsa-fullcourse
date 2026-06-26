#include <bits/stdc++.h>
using namespace std;

// 1      1
// 12    21
// 123  321
// 12344321

void numberCrownPattern(int n)
{

    int spaces = 2 * (n - 1);

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {

        // Print the left increasing numbers
        for (int j = 1; j <= i; j++)
        {

            cout << j;
        }

        // Print the middle spaces
        for (int j = 1; j <= spaces; j++)
        {

            cout << " ";
        }

        // Print the right decreasing numbers
        for (int j = i; j >= 1; j--)
        {

            cout << j;
        }

        // Move to the next line
        cout << endl;
        // Decrease the spaces for the next row
        spaces -= 2;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Number crown pattern: ";
    cin >> n;

    numberCrownPattern(n);

    return 0;
}
