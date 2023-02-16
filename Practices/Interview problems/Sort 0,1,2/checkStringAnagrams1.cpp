#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{
    int str1Length = a.length();
    int str2Length = b.length();

    if (str1Length != str2Length)
    {
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < str1Length; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string a = "geeksforgeeks";
    string b = "forgeeksgeeks";
    bool result = isAnagram(a, b);
    if (result)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}