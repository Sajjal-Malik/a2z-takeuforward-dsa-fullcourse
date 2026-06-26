#include <bits/stdc++.h>
using namespace std;

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

void alphaHillPyramidPattern(int n)
{
    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        char character = 'A';
        // Calculate the breakpoint for increasing/decreasing characters
        int breakpoint = (2 * i + 1) / 2;

        // Print the letter palindrome part
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << character;
            if (j < breakpoint)
                character++;
            else
                character--;
        }

        // Print trailing spaces (optional, for consistency with original C++ code)
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Move to the next line
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Alpha Hill pyramid pattern: ";
    cin >> n;

    alphaHillPyramidPattern(n);

    return 0;
}
