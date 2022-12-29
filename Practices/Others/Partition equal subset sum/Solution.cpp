#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool splitArrayHelper(int arr[], int n, int index, int target)
{
    if (index >= n)
    {
        return false;
    }
    if (target < 0)
    {
        return false;
    }
    if (target == 0)
    {
        return true;
    }
    bool inc = splitArrayHelper(arr, n, index + 1, target - arr[index]);
    bool exc = splitArrayHelper(arr, n, index + 1, target);
    return inc || exc;
}
// using memoization. (top down approach)
bool splitArrayHelperMem(int arr[], int n, int index, int target, vector<vector<int>> &dp)
{
    if (index >= n)
    {
        return false;
    }
    if (target < 0)
    {
        return false;
    }
    if (target == 0)
    {
        return true;
    }
    if (dp[index][target] != -1)
    {
        return dp[index][target];
    }
    bool inc = splitArrayHelperMem(arr, n, index + 1, target - arr[index], dp);
    bool exc = splitArrayHelperMem(arr, n, index + 1, target, dp);
    return dp[index][target] = inc || exc;
}
bool splitArray(int arr[], int n)
{
    if (n <= 1)
    {
        return false;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    if (total & 1) // check odd number
    {
        return false;
    }
    int target = total / 2;
    // return splitArrayHelper(arr, n, 0, target);
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    return splitArrayHelperMem(arr, n, 0, target, dp);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (splitArray(arr, n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}