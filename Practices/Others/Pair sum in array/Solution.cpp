#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pairSum(vector<int> &arr, int n, int target)
{
    // Write your code here.
    int i = 0, j = n - 1, count = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            count++;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
}
int main()
{

    int n, x, y;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        arr.push_back(y);
    }
    cin >> x;
    cout << pairSum(arr, n, x) << endl;
}