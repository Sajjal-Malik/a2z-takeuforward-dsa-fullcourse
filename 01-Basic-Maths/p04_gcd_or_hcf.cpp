#include <bits/stdc++.h>
using namespace std;

/**
 * Finds the Greatest Common Divisor (GCD) using a linear search.
 * Iterates through every number from 1 up to the smaller of the two inputs.
 * Time Complexity: O(min(a, b))
 */
void findGcdOrHcfBruteForce(int firstNum, int secondNum)
{
    int greatestCommonDivisor = 1;
    int smallerNum = min(firstNum, secondNum);

    for (int currentDivisor = 1; currentDivisor <= smallerNum; currentDivisor++)
    {
        // Check if currentDivisor divides both numbers without a remainder
        if (firstNum % currentDivisor == 0 && secondNum % currentDivisor == 0)
        {
            greatestCommonDivisor = currentDivisor;
        }
    }
    cout << "GCD (Brute Force): " << greatestCommonDivisor << endl;
}

/**
 * Finds the GCD using the Optimized Euclidean Algorithm.
 * Uses the modulo operator to repeatedly reduce the larger number until one becomes zero.
 * Time Complexity: O(log(min(a, b)))
 */
void findGcdOrHcfOptimal(int firstNum, int secondNum)
{
    while (firstNum > 0 && secondNum > 0)
    {
        if (firstNum > secondNum)
            firstNum = firstNum % secondNum; // Reduce the larger number
        else
            secondNum = secondNum % firstNum; // Reduce the larger number
    }

    // The non-zero number is the GCD
    if (firstNum == 0)
        cout << "GCD (Optimal): " << secondNum << endl;
    else
        cout << "GCD (Optimal): " << firstNum << endl;
}

int main()
{
    int input1, input2;

    cout << "Enter the first number: ";
    cin >> input1;
    cout << "Enter the second number: ";
    cin >> input2;

    findGcdOrHcfOptimal(input1, input2);

    return 0;
}
