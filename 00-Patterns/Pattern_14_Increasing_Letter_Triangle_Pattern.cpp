#include <bits/stdc++.h>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E

void increasingLetterTrianglePattern(int n)
{
    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {

        // Iterate from 'A' to the appropriate character for the current row
        for (char character = 'A'; character <= 'A' + i - 1; character++)
        {

            cout << character << " ";
        }

        // Move to the next line
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the increasing Letter Triangle pattern: ";
    cin >> n;

    increasingLetterTrianglePattern(n);

    return 0;
}
