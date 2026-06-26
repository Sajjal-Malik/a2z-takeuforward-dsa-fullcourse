#include <bits/stdc++.h>
using namespace std;

/*
    Function: printForwardBackward
    Purpose : Prints numbers from 1 to n and then back from n to 1
*/
void printForwardBackward(int current, int limit)
{
    // Base case:
    if (current > limit)
        return;

    // Forward phase
    cout << current << " ";

    // Recursive call
    printForwardBackward(current + 1, limit);

    // Backward phase
    cout << current << " ";
}

int main()
{
    int n;
    cin >> n;

    printForwardBackward(1, n);
    return 0;
}
