#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    // Write your code here.
    sort(arr.begin(), arr.end(), greater<int>());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            vector<int> res;
            int val = arr[i] + arr[l] + arr[r];
            if (val == K)
            {
                res.push_back(arr[i]);
                res.push_back(arr[l]);
                res.push_back(arr[r]);
                l++;
                r--;
                ans.push_back(res);
            }
            else if (val < K)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
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
    // findTriplets(arr, n, x);
    vector<vector<int>> output = findTriplets(arr, n, x);
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
