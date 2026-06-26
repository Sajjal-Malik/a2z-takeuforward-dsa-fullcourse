#include <bits/stdc++.h>
using namespace std;

/**
 * Checks if a number is an Armstrong number.
 * Definition: A 3-digit number where the sum of the cubes of its digits equals the number itself.
 */
void checkArmstrongNumber(int inputNumber)
{
    int remainingDigits = inputNumber;
    int sumOfCubes = 0;

    while (remainingDigits > 0)
    {
        // Isolate the rightmost digit
        int currentDigit = remainingDigits % 10;

        // Accumulate the cube of the current digit
        sumOfCubes += (currentDigit * currentDigit * currentDigit);

        // Remove the rightmost digit to process the next one
        remainingDigits /= 10;
    }

    // Determine if the calculated sum matches the original input
    if (sumOfCubes == inputNumber)
    {
        cout << "It is an Armstrong number" << endl;
    }
    else
    {
        cout << "It is not an Armstrong number" << endl;
    }
}

int main()
{
    int targetNumber;
    cout << "Enter a number: ";
    cin >> targetNumber;

    checkArmstrongNumber(targetNumber);

    return 0;
}
