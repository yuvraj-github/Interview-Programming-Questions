#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    // Your code goes here
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (mp.find(b[i]) != mp.end() && mp[b[i]] != 0)
            count++;
        mp[b[i]] = 0;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        cout << NumberofElementsInIntersection(a, b, n, m) << endl;
    }
}