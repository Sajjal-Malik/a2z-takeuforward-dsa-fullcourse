#include <bits/stdc++.h>
using namespace std;

/*
    Function: calculateFactorialFunctionalWay
    Purpose : Computes factorial of a non-negative integer using recursion.
    Formula : n! = n * (n-1)! , with 0! = 1
*/
int calculateFactorialFunctionalWay(int number)
{
    // Base case:
    // Factorial of 0 is 1, stops recursion
    if (number == 0)
    {
        return 1;
    }

    // Recursive case:
    // Multiply current number with factorial of (number - 1)
    return number * calculateFactorialFunctionalWay(number - 1);
}

/*
    Function: factorialParameterizedWay
    Purpose : Computes factorial of a non-negative integer using recursion.
    Formula : n! = n * (n-1)! , with 0! = 1
*/
void factorialParameterizedWay(int number, int factorial)
{
    // Base case:
    if (number <= 1)
    {
        cout << factorial;
        return;
    }
    // Recursive case:
    factorialParameterizedWay(number - 1, factorial * number);
}

int main()
{
    int inputNumber;
    cin >> inputNumber;

    cout << calculateFactorialFunctionalWay(inputNumber) << endl;
    return 0;
}
