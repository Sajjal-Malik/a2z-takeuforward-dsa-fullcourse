#include <bits/stdc++.h>
using namespace std;

void checkPallindromeNumber(int n)
{
    int reverseNumber = 0;
    int originalNumber = n; // Preserve the original number for final comparison

    // Logic to reverse the number
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }

    // A number is a palindrome if it is equal to its reverse
    if (reverseNumber == originalNumber)
        cout << "It is a Pallindrome number" << endl;
    else
        cout << "It is not a Pallindrome number" << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkPallindromeNumber(n);

    return 0;
}
