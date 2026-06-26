#include <bits/stdc++.h>
using namespace std;

/*
    Function: printDescending
    Purpose : Prints numbers from n down to 1 using recursion
*/
void printDescending(int current)
{
    // Base case
    if (current < 1)
        return;

    cout << current << endl;

    // Recursive call with decremented value
    printDescending(current - 1);
}

int main()
{
    int n;
    cin >> n;

    printDescending(n);
    return 0;
}
