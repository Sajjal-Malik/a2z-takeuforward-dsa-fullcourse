#include <bits/stdc++.h>
using namespace std;

/*
    Function: printNameNTimes
    Purpose : Prints the name "Malik" exactly n times using recursion
*/
void printNameNTimes(int count, int totalTimes)
{
    // Base case
    if (count > totalTimes)
        return;

    cout << "Malik" << endl;

    // Recursive call for next count
    printNameNTimes(count + 1, totalTimes);
}

int main()
{
    int n;
    cin >> n;

    printNameNTimes(1, n);
    return 0;
}
