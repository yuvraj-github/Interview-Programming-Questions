#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> m;
    sort(arr, arr+n, greater<int>()); // sort array in descending order.
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int val = k + arr[i];
        if (m[val])
        {
            count = count + m[val];
        }
        m[arr[i]]++;
    }
    return count;
}
int main()
{
    int n, k;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>k;
    cout << getPairsWithDifferenceK(arr, n, k);
    delete[] arr;
}