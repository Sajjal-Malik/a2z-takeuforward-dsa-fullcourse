#include <bits/stdc++.h>
using namespace std;

/**
 * Brute Force Approach
 * Iterates linearly from 1 to targetNumber to find all factors.
 * Time Complexity: O(n)
 */
void printAllDivisorsBruteForce(int targetNumber)
{
    for (int currentStep = 1; currentStep <= targetNumber; currentStep++)
    {
        // A number is a divisor if the remainder is zero
        if (targetNumber % currentStep == 0)
            cout << currentStep << " ";
    }
}

/**
 * Optimal Approach
 * Exploits the mathematical property that divisors exist in pairs around the square root.
 * Time Complexity: O(sqrt(n) + d log d) where d is the number of divisors.
 */
void printAllDivisorsOptimal(int targetNumber)
{
    vector<int> divisorList;
    int squareRootLimit = sqrt(targetNumber);

    for (int candidate = 1; candidate <= squareRootLimit; candidate++)
    {
        if (targetNumber % candidate == 0)
        {
            divisorList.push_back(candidate);

            if (targetNumber / candidate != candidate)
                divisorList.push_back(targetNumber / candidate);
        }
    }

    // Sort list to ensure divisors are displayed in ascending order
    sort(divisorList.begin(), divisorList.end());

    for (auto divisor : divisorList)
        cout << divisor << " ";
}

int main()
{
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    printAllDivisorsBruteForce(inputNumber);
    cout << endl;
    printAllDivisorsOptimal(inputNumber);

    return 0;
}
