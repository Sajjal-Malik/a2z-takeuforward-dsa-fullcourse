#include <bits/stdc++.h>
using namespace std;

/*
    Parameterized Recursion
    The sum is passed and updated as a parameter
*/
int sumOfNParameterizedWay(int current, int accumulatedSum)
{
    // Base case
    if (current < 1)
    {
        return accumulatedSum;
    }

    // Recursive call with updated sum
    return sumOfNParameterizedWay(current - 1, accumulatedSum + current);
}

/*
    Functional Recursion
    The sum is calculated while returning from recursion
*/
int sumOfNFunctionalWay(int n)
{
    // Base case
    if (n <= 0)
        return 0;

    // Recursive formula
    return n + sumOfNFunctionalWay(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfNParameterizedWay(n, 0) << endl;
    cout << sumOfNFunctionalWay(n) << endl;

    return 0;
}
