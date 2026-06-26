#include <bits/stdc++.h>
using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void printRightAngledNumberPatternII(int n)
{
    // Outer loop controls the rows. It runs 'n' times (once for each row)
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns, iterating up to the current row number 'i'
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        // Move to the next line after each row is complete
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the right-angled number pyramid pattern II: ";
    cin >> n;

    printRightAngledNumberPatternII(n);

    return 0;
}