#include <bits/stdc++.h>
using namespace std;

// B C D E
// A B C D
// A B C
// A B
// A

void reverseLetterTrianglePattern(int n)
{
    // Outer loop controls the rows
    for (int i = 1; i <= n; i++)
    {
        // Iterate from 'A' up to the character determined by n and i
        for (char character = 'A'; character <= 'A' + (n - i); character++)
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
    cout << "Enter the number of rows for the Reverse Letter Triangle pattern: ";
    cin >> n;

    reverseLetterTrianglePattern(n);

    return 0;
}
