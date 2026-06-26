#include <bits/stdc++.h>
using namespace std;

/*
    Function: fibonacci
    Purpose : Returns the nth Fibonacci number using recursion
    Sequence: 0, 1, 1, 2, 3, 5, 8, 13, so on...
*/
int fibonacci(int index)
{
    // Base cases:
    // F(0) = 0, F(1) = 1
    if (index <= 1)
    {
        return index;
    }

    // Recursive calls:
    int lastValue = fibonacci(index - 1);
    int secondLastValue = fibonacci(index - 2);

    // Sum of two previous Fibonacci numbers
    return lastValue + secondLastValue;
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}
