#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int n, int X)
{
    // Your Code Here
    sort(A, A + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int val = A[i] + A[l] + A[r];
            if (val == X)
            {
                return true;
            }
            else if (val < X)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cout << find3Numbers(arr, n, x) << endl;
}