#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void perfectSumHelper(int arr[], int n, int x, int tempsum, int index, int &count, string output)
{
    if (index == n)
    {
        if (tempsum == x)
        {
            count++;
            cout << output << endl;
        }
        return;
    }
    perfectSumHelper(arr, n, x, tempsum + arr[index], index + 1, count, output + to_string(arr[index]) + " ");
    perfectSumHelper(arr, n, x, tempsum, index + 1, count, output);
}
int pairSum(int arr[], int n, int target)
{
    // Write your code here.
    int count = 0;
    perfectSumHelper(arr, n, target, 0, 0, count, "");
    return count;
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
    cout << pairSum(arr, n, x) << endl;
}