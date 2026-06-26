#include <bits/stdc++.h>
using namespace std;

/**
 * Brute Force Approach
 * Checks primality by counting all divisors from 1 to n.
 * Time Complexity: O(n)
 */
void primeNumberBruteforce(int inputNumber)
{
    int divisorCount = 0;
    for (int candidate = 1; candidate <= inputNumber; candidate++)
    {
        // If divisible, increment the divisor counter
        if (inputNumber % candidate == 0)
            divisorCount++;
    }

    // A prime number has exactly two distinct divisors: 1 and itself
    if (divisorCount == 2)
        cout << "Number is prime";
    else
        cout << "Number is not prime";
}

/**
 * Optimal Approach
 * Checks primality by counting divisors up to the square root of n.
 * Time Complexity: O(sqrt(n))
 */
void primeNumberOptimal(int inputNumber)
{
    int divisorCount = 0;
    int rootLimit = sqrt(inputNumber);

    for (int candidate = 1; candidate <= rootLimit; candidate++)
    {
        if (inputNumber % candidate == 0)
        {
            // Count the found divisor
            divisorCount++;

            // Count the paired divisor if it is distinct (e.g., for 36, 6*6 only counts once)
            if (inputNumber / candidate != candidate)
                divisorCount++;
        }
    }

    // Verification based on the total divisor count
    if (divisorCount == 2)
        cout << "Number is prime";
    else
        cout << "Number is not prime";
}

int main()
{
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    primeNumberBruteforce(userInput);

    return 0;
}
