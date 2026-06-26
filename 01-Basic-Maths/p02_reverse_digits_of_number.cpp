#include <bits/stdc++.h>
using namespace std;

void reverseDigitsOfNumber(int n)
{
    int reverseNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10; // Get the rightmost digit
        n /= 10;                // Remove that digit from the original number
        // Shift existing digits left (multiply by 10) and add the new last digit
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    cout << "The reverse of the given number is: " << reverseNumber << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseDigitsOfNumber(n);

    return 0;
}
