#include <bits/stdc++.h>
using namespace std;

/*
    Function: printAscending
    Purpose : Prints numbers from 1 to n using recursion
*/
void printAscending(int current, int limit)
{
    // Base case
    if (current > limit)
        return;

    cout << current << endl;

    // Recursive call with incremented value
    printAscending(current + 1, limit);
}

int main()
{
    int n;
    cin >> n;

    printAscending(1, n);
    return 0;
}
