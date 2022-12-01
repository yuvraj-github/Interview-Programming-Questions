#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPallindrome(string str, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    int lastIndex = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[lastIndex--])
        {
            return false;
        }
    }
    return true;
}
bool isPalindrome(string &s)
{
    // Write your code here.
    int n = s.length();
    if (checkPallindrome(s, n))
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    cin >> str;
    if (isPalindrome(str))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}