#include <bits/stdc++.h>
using namespace std;

/**
 * Calculates the sum of digits and determines if the number is a palindrome.
 * Uses the mathematical approach of reversing the integer.
 */
void checkSumAndPalindrome(int inputNumber)
{
    // Standardize input by handling negative values
    if (inputNumber < 0)
    {
        cout << "Note: Taking absolute value of input." << endl;
        inputNumber = abs(inputNumber);
    }

    int digitSum = 0;
    int originalReference = inputNumber;
    int reversedResult = 0;
    int remainingDigits = inputNumber;

    while (remainingDigits > 0)
    {
        // Isolate the last digit
        int currentDigit = remainingDigits % 10;

        // Add digit to the total sum
        digitSum += currentDigit;

        // Build the reversed number by shifting positions
        reversedResult = (reversedResult * 10) + currentDigit;

        // Truncate the last digit
        remainingDigits /= 10;
    }

    cout << "Sum of digits: " << digitSum << endl;

    // Check if the original sequence matches the reversed sequence
    if (originalReference == reversedResult)
    {
        cout << "Is a Palindrome: Yes" << endl;
    }
    else
    {
        cout << "Is a Palindrome: No" << endl;
    }
}

int main()
{
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    // Validate that the input is a valid integer sequence
    if (!cin)
    {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    checkSumAndPalindrome(userInput);

    return 0;
}
