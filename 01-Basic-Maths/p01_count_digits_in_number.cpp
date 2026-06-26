#include <bits/stdc++.h>
using namespace std;

void countDigitsInNumber(int n)
{
    int count = 0;
    int originalNumber = n; // Store original value for the final output message

    // Loop continues until all digits are processed
    while (n > 0)
    {
        int lastDigit = n % 10; // Extract the last digit (though not used in counting)
        count++;                // Increment counter for each digit found
        n /= 10;                // Remove the last digit using integer division
    }
    cout << "The total number of digits in " << originalNumber << " are: " << count << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    countDigitsInNumber(n);

    return 0;
}
