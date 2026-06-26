#include <bits/stdc++.h>
using namespace std;

bool isPalindromeTwoPointer(string &s, int left, int right)
{
    // Base Case: If pointers cross or meet, it's a palindrome
    if (left >= right)
        return true;

    // Check if ends match
    if (s[left] != s[right])
        return false;

    // Recurse for the inner substring
    return isPalindromeTwoPointer(s, left + 1, right - 1);
}

/*
    Function: isPalindrome
    Purpose : Checks whether a string is a palindrome using recursion
*/
bool isPalindromeSinglePointer(int leftIndex, string &text, int length)
{
    // Base case:
    // When left index reaches or crosses the middle
    if (leftIndex >= length / 2)
    {
        return true;
    }

    // If characters at both ends do not match
    if (text[leftIndex] != text[length - leftIndex - 1])
    {
        return false;
    }

    // Recursive call moving inward
    return isPalindromeSinglePointer(leftIndex + 1, text, length);
}

int main()
{
    string word = "madam";
    int length = word.size();

    if (isPalindromeTwoPointer(word, 0, length))
    {
        cout << "This string is a Palindrome" << endl;
    }
    else
    {
        cout << "This string is NOT a Palindrome" << endl;
    }

    if (isPalindromeSinglePointer(0, word, length - 1))
    {
        cout << "This string is a Palindrome" << endl;
    }
    else
    {
        cout << "This string is NOT a Palindrome" << endl;
    }

    return 0;
}
