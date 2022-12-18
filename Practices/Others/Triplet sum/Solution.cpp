#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int val = arr[i] + arr[l] + arr[r];
            if (val == num)
            {
                count++;
                l++;
                r--;
            }
            else if (val < num)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return count;
}
int main()
{
    int n, x;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cout << tripletSum(arr, n, x) << endl;
}